#
# Copyright 2023-2024 Hewlett Packard Enterprise Development LP
# Other additional copyright holders may be indicated within.
#
# The entirety of this work is licensed under the Apache License,
# Version 2.0 (the "License"); you may not use this file except
# in compliance with the License.
#
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

import chapel
from chapel import *
import re

def name_for_linting(node):
    name = node.name()

    # Strip dollar signs.
    name = name.replace("$", "")

    return name

def check_camel_case(node):
    return re.fullmatch(r'([a-z]+([A-Z][a-z]*|\d+)*|[A-Z]+)?', name_for_linting(node))

def check_pascal_case(node):
    return re.fullmatch(r'(([A-Z][a-z]*|\d+)+|[A-Z]+)?', name_for_linting(node))

def register_rules(driver):
    @driver.basic_rule(VarLikeDecl, default=False)
    def CamelOrPascalCaseVariables(context, node):
        """
        Warn for variables that are not 'camelCase' or 'PascalCase'.
        """

        if node.name() == "_": return True
        if node.linkage() == 'extern': return True
        return check_camel_case(node) or check_pascal_case(node)

    @driver.basic_rule(Record)
    def CamelCaseRecords(context, node):
        """
        Warn for records that are not 'camelCase'.
        """

        return check_camel_case(node)

    @driver.basic_rule(Function)
    def CamelCaseFunctions(context, node):
        """
        Warn for functions that are not 'camelCase'.
        """

        # Override functions / methods can't control the name, that's up
        # to the parent.
        if node.is_override(): return True

        if node.linkage() == 'extern': return True
        if node.kind() == 'operator': return True
        if node.name() == 'init=': return True

        return check_camel_case(node)

    @driver.basic_rule(Class)
    def PascalCaseClasses(context, node):
        """
        Warn for classes that are not 'PascalCase'.
        """

        return check_pascal_case(node)

    @driver.basic_rule(Module)
    def PascalCaseModules(context, node):
        """
        Warn for modules that are not 'PascalCase'.
        """

        return node.kind() == "implicit" or check_pascal_case(node)

    @driver.basic_rule(Module, default=False)
    def UseExplicitModules(context, node):
        """
        Warn for code that relies on auto-inserted implicit modules.
        """

        return node.kind() != "implicit"

    @driver.basic_rule(Loop)
    def DoKeywordAndBlock(context, node):
        """
        Warn for redundant 'do' keyword before a curly brace '{'.
        """

        return node.block_style() != "unnecessary"

    @driver.basic_rule(Coforall, default=False)
    def NestedCoforalls(context, node):
        """
        Warn for nested 'coforall' loops, which could lead to performance hits.
        """

        parent = node.parent()
        while parent is not None:
            if isinstance(parent, Coforall):
                return False
            parent = parent.parent()
        return True

    @driver.basic_rule([Conditional, BoolLiteral, chapel.rest])
    def BoolLitInCondStmt(context, node):
        """
        Warn for boolean literals like 'true' in a conditional statement.
        """

        return False

    @driver.basic_rule(NamedDecl)
    def ChplPrefixReserved(context, node):
        """
        Warn for user-defined names that start with the 'chpl_' reserved prefix.
        """

        if node.name().startswith("chpl_"):
            path = node.location().path()
            return context.is_bundled_path(path)
        return True

    @driver.basic_rule(Record)
    @driver.basic_rule(Class)
    def MethodsAfterFields(context, node):
        """
        Warn for classes or records that mix field and method definitions.
        """

        method_seen = False
        for child in node:
            if isinstance(child, VarLikeDecl) and method_seen:
                return False
            if isinstance(child, Function):
                method_seen = True
        return True

    #Five things have to match between consecutive decls for this to warn:
    # 1. same type
    # 2. same kind
    # 3. same attributes
    # 4. same linkage
    # 5. same pragmas
    @driver.advanced_rule(default=False)
    def ConsecutiveDecls(context, root):
        """
        Warn for consecutive variable declarations that can be combined.
        """

        def is_relevant_decl(node):
            var_node = None
            if isinstance(node, MultiDecl):
                for child in node:
                    if isinstance(child, Variable): var_node = child
                else:
                    return None
            elif isinstance(node, Variable):
                var_node = node
            else:
                return None

            var_type = None
            var_type_expr = var_node.type_expression()

            if isinstance(var_type_expr, FnCall):
                #for function call, we need to match all the components
                var_type = ''
                for child in var_type_expr:
                    if child is None:
                        continue
                    if 'name' in dir(child):
                        var_type += child.name()
                    elif 'text' in dir(child):
                        var_type += child.text()
            elif isinstance(var_type_expr, Identifier):
                var_type = var_type_expr.name()

            var_kind = var_node.kind()

            var_attributes = ''
            var_attribute_group = var_node.attribute_group()
            if var_attribute_group:
                var_attributes = " ".join(
                    [a.name() for a in var_attribute_group if a is not None])

            var_linkage = var_node.linkage()

            var_pragmas = ' '.join(var_node.pragmas())
            return (var_type, var_kind, var_attributes, var_linkage, var_pragmas)

        def recurse(node):
            consecutive = []
            last_characteristics = None

            for child in node:
                #we want to skip Comments entirely
                if isinstance(child,Comment):
                    continue

                #we want to do MultiDecls and TupleDecls, but not recurse
                skip_children = isinstance(child, (MultiDecl, TupleDecl))

                if not skip_children:
                    yield from recurse(child)

                new_characteristics = is_relevant_decl(child)
                compatible = new_characteristics is not None and \
                    new_characteristics == last_characteristics

                last_characteristics = new_characteristics

                if compatible:
                    consecutive.append(child)
                else:
                    #this one doesn't match, yield any from previous sequence
                    # and start looking for matches for this one
                    if len(consecutive) > 1:
                        yield consecutive[1]
                    consecutive = [child]

            if len(consecutive) > 1:
                yield consecutive[1]

        yield from recurse(root)

    @driver.advanced_rule
    def MisleadingIndentation(context, root):
        """
        Warn for single-statement blocks that look like they might be multi-statement blocks.
        """

        prev, prevloop = None, None
        for child in root:
            if isinstance(child, Comment): continue
            yield from MisleadingIndentation(context, child)

            if prev is not None:
                if child.location().start()[1] == prev.location().start()[1]:
                    yield (child, prevloop)

            prev, prevloop = None, None
            if isinstance(child, Loop) and child.block_style() == "implicit":
                grandchildren = list(child)
                # safe to access [-1], loops must have at least 1 child
                for blockchild in reversed(list(grandchildren[-1])):
                    if isinstance(blockchild, Comment): continue
                    prev = blockchild
                    prevloop = child
                    break

    @driver.advanced_rule(default=False)
    def UnusedFormal(context, root):
        """
        Warn for unused formals in functions.
        """

        formals = dict()
        uses = set()

        for (formal, _) in chapel.each_matching(root, Formal):
            # For now, it's harder to tell if we're ignoring 'this' formals
            # (what about method calls with implicit receiver?). So skip
            # 'this' formals.
            if formal.name() == "this":
                continue

            # extern functions have no bodies that can use their formals.
            if formal.parent().linkage() == "extern":
                continue

            formals[formal.unique_id()] = formal

        for (use, _) in chapel.each_matching(root, Identifier):
            refersto = use.to_node()
            if refersto:
                uses.add(refersto.unique_id())

        for unused in formals.keys() - uses:
            yield (formals[unused], formals[unused].parent())

    @driver.advanced_rule
    def UnusedLoopIndex(context, root):
        """
        Warn for unused index variables in loops.
        """

        indices = dict()
        uses = set()

        def variables(node):
            if isinstance(node, Variable):
                if node.name() != "_": yield node
            elif isinstance(node, TupleDecl):
                for child in node:
                    yield from variables(child)

        for (loop, match) in chapel.each_matching(root, IndexableLoop):
            node = loop.index()
            if node is None:
                continue

            for index in variables(node):
                indices[index.unique_id()] = (index, loop)

        for (use, _) in chapel.each_matching(root, Identifier):
            refersto = use.to_node()
            if refersto:
                uses.add(refersto.unique_id())

        for unused in indices.keys() - uses:
            yield indices[unused]

    @driver.advanced_rule
    def SimpleDomainAsRange(context: Context, root: AstNode):
        """
        Warn for simple domains in loops that can be ranges.
        """

        def is_range_like(node: AstNode):
            """
            a node is range like if its a range, a `count` expr with a
            range-like on the lhs, a `by` expr with a range-like on the lhs, or
            an `align` expr with a range-like on the lhs
            """

            if isinstance(node, Range):
                return True
            if (
                isinstance(node, OpCall)
                and node.is_binary_op()
                and (
                    node.op() == "#"
                    or node.op() == "by"
                    or node.op() == "align"
                )
            ):
                return is_range_like(node.actual(0))
            return False

        for loop, _ in chapel.each_matching(root, IndexableLoop):
            iterand = loop.iterand()
            if not isinstance(iterand, Domain):
                continue
            exprs = list(iterand.exprs())
            if len(exprs) != 1:
                continue
            # only warn for ranges or count operators
            if not is_range_like(exprs[0]):
                continue

            yield iterand, loop

    @driver.advanced_rule
    def IncorrectIndentation(context: Context, root: AstNode):
        """
        Warn for inconsistent or missing indentation
        """

        # First, recurse and find warnings in children.
        for child in root:
            yield from IncorrectIndentation(context, child)

        def contains_statements(node: AstNode) -> bool:
            """
            Returns true for allow-listed AST nodes that contain
            just a list of statements.
            """
            classes = (
                Record,
                Class,
                Module,
                SimpleBlockLike,
                Interface,
                Union,
                Enum,
                Cobegin
            )
            return isinstance(node, classes)

        def unwrap_intermediate_block(node: AstNode) -> Optional[AstNode]:
            """
            Given a node, find the reference indentation that its children
            should be compared against.

            This method also rules out certain nodes that should
            not be used for parent-child indentation comparison.
            """
            if not isinstance(node, Block):
                return node

            parent = node.parent()
            if not parent:
                return node

            if isinstance(parent, (Function, Loop)):
                return parent
            elif isinstance(parent, Conditional) and parent.is_expression_level():
                return None
            return node

        # If root is something else (e.g., function call), do not
        # apply indentation rules; only apply them to things that contain
        # a list of statements.
        is_eligible_parent_for_indentation = contains_statements(root)
        if not is_eligible_parent_for_indentation:
            return

        parent_for_indentation = unwrap_intermediate_block(root)
        parent_depth = None
        if parent_for_indentation is None:
            # don't compare against any parent depth.
            pass
        # For implicit modules, proper code will technically be on the same
        # line as the module's body. But we don't want to warn about that,
        # since we don't want to ask all code to be indented one level deeper.
        elif not (isinstance(parent_for_indentation, Module) and parent_for_indentation.kind() == "implicit"):
            parent_depth = parent_for_indentation.location().start()[1]

        prev = None
        prev_depth = None
        prev_line = None

        # We only care about misaligned statements, so we don't want to do stuff
        # like warn for inherit-exprs or pragmas on a record.
        iterable = root
        if isinstance(root, AggregateDecl):
            iterable = root.decls_or_comments()
        elif isinstance(root, SimpleBlockLike):
            iterable = root.stmts()

        for child in iterable:
            if isinstance(child, Comment): continue

            # some NamedDecl nodes currently use the name as the location, which
            # does not indicate their actual indentation.
            if isinstance(child, (VarLikeDecl, TupleDecl, ForwardingDecl)):
                continue
            # private function locations are bugged and don't include the 'private'
            # keyword.
            #
            # https://github.com/chapel-lang/chapel/issues/24818
            if isinstance(child, Function) and child.visibility() == "private":
                continue

            line, depth = child.location().start()

            # Warn for two statements on one line:
            #   var x: int; var y: int;
            if line == prev_line:
                # Exception for enums, which are allowed to be on the same line.
                #   enum color { red, green, blue }
                if not isinstance(child, EnumElement):
                    yield child
            # Warn for misaligned siblings:
            #   var x: int;
            #     var y: int;
            elif prev_depth and depth != prev_depth:
                # Special case, slightly coarse: avoid double-warning with
                # MisleadingIndentation
                if not(prev and isinstance(prev, Loop) and prev.block_style() == "implicit"):
                    yield child

                # Do not update 'prev_depth'; use original prev_depth as
                # reference for next sibling.
                prev_line = line
                prev = child
                continue
            # Warn for children that are not indented relative to parent
            #
            #   record r {
            #   var x: int;
            #   }
            elif parent_depth and depth == parent_depth:
                yield child

            prev_depth = depth
            prev = child
            prev_line = line
