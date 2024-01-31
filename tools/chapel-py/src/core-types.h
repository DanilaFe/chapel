/*
 * Copyright 2021-2024 Hewlett Packard Enterprise Development LP
 * Other additional copyright holders may be indicated within.
 *
 * The entirety of this work is licensed under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except
 * in compliance with the License.
 *
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef CHAPEL_PY_CORE_TYPES_H
#define CHAPEL_PY_CORE_TYPES_H

#define PY_SSIZE_T_CLEAN
#include "Python.h"
#include "chpl/framework/Context.h"
#include "chpl/uast/AstTag.h"
#include "error-tracker.h"

PyTypeObject* parentTypeFor(chpl::uast::asttags::AstTag tag);
PyTypeObject* parentTypeFor(chpl::types::typetags::TypeTag tag);
PyTypeObject* parentTypeFor(chpl::types::paramtags::ParamTag tag);

typedef struct {
  PyObject_HEAD
  chpl::Context context;
  /* Type-specific fields go here. */
} ContextObject;
extern PyTypeObject ContextType;
void setupContextType();

int ContextObject_init(ContextObject* self, PyObject* args, PyObject* kwargs);
void ContextObject_dealloc(ContextObject* self);
PyObject* ContextObject_parse(ContextObject *self, PyObject* args);
PyObject* ContextObject_set_module_paths(ContextObject *self, PyObject* args);
PyObject* ContextObject_introspect_parsed_files(ContextObject *self, PyObject* args);
PyObject* ContextObject_is_bundled_path(ContextObject *self, PyObject* args);
PyObject* ContextObject_advance_to_next_revision(ContextObject *self, PyObject* args);
PyObject* ContextObject_get_pyi_file(ContextObject *self, PyObject* args);
PyObject* ContextObject_track_errors(ContextObject *self, PyObject* args);

typedef struct {
  PyObject_HEAD
  chpl::Location location;
} LocationObject;
extern PyTypeObject LocationType;
void setupLocationType();

int LocationObject_init(LocationObject* self, PyObject* args, PyObject* kwargs);
void LocationObject_dealloc(LocationObject* self);
PyObject* LocationObject_start(LocationObject *self, PyObject* Py_UNUSED(args));
PyObject* LocationObject_end(LocationObject *self, PyObject* Py_UNUSED(args));
PyObject* LocationObject_path(LocationObject *self, PyObject* Py_UNUSED(args));

typedef struct {
  PyObject_HEAD
  PyObject* contextObject;
  const chpl::resolution::Scope* scope;
} ScopeObject;
extern PyTypeObject ScopeType;
void setupScopeType();

int ScopeObject_init(ScopeObject* self, PyObject* args, PyObject* kwargs);
void ScopeObject_dealloc(ScopeObject* self);
PyObject* ScopeObject_used_imported_modules(ScopeObject *self, PyObject* Py_UNUSED(args));

typedef struct {
  PyObject_HEAD
  PyObject* contextObject;
  const chpl::uast::AstNode* ptr;
} AstNodeObject;
extern PyTypeObject AstNodeType;
void setupAstNodeType();

int AstNodeObject_init(AstNodeObject* self, PyObject* args, PyObject* kwargs);
void AstNodeObject_dealloc(AstNodeObject* self);
PyObject* AstNodeObject_dump(AstNodeObject *self);
PyObject* AstNodeObject_tag(AstNodeObject *self);
PyObject* AstNodeObject_unique_id(AstNodeObject *self);
PyObject* AstNodeObject_attribute_group(AstNodeObject *self);
PyObject* AstNodeObject_pragmas(AstNodeObject *self);
PyObject* AstNodeObject_parent(AstNodeObject* self);
PyObject* AstNodeObject_iter(AstNodeObject *self);
PyObject* AstNodeObject_location(AstNodeObject *self);
PyObject* AstNodeObject_scope(AstNodeObject *self);
PyObject* AstNodeObject_type(AstNodeObject *self);
PyObject* AstNodeObject_called_fn(AstNodeObject *self);

typedef struct {
  PyObject_HEAD
  PyObject* contextObject;
  const chpl::types::Type* ptr;
} ChapelTypeObject;
extern PyTypeObject ChapelTypeType;
void setupChapelTypeType();

int ChapelTypeObject_init(ChapelTypeObject* self, PyObject* args, PyObject* kwargs);
void ChapelTypeObject_dealloc(ChapelTypeObject* self);
PyObject* ChapelTypeObject_str(ChapelTypeObject* self);

typedef struct {
  PyObject_HEAD
  PyObject* contextObject;
  const chpl::types::Param* ptr;
} ParamObject;
extern PyTypeObject ParamType;
void setupParamType();

int ParamObject_init(ParamObject* self, PyObject* args, PyObject* kwargs);
void ParamObject_dealloc(ParamObject* self);
PyObject* ParamObject_str(ParamObject* self);

/**
  Declare a Python PyTypeObject that corresponds to a generated type
  (AST node, Chapel type, etc.) of a given name.
 */
#define DECLARE_PY_OBJECT_FOR(ROOT, NAME)\
  typedef struct { \
    ROOT##Object parent; \
  } NAME##Object; \
  \
  extern PyTypeObject NAME##Type;

/* Generate a Python object for reach AST node type. */
#define GENERATED_TYPE(ROOT, NAME, TAG, FLAGS) DECLARE_PY_OBJECT_FOR(ROOT, NAME)
#include "generated-types-list.h"
#undef DECLARE_PY_OBJECT_FOR

void setupGeneratedTypes();

template<typename IntentType>
const char* intentToString(IntentType intent) {
  return qualifierToString(chpl::uast::Qualifier(int(intent)));
}

/**
  Create a Python object of the class corresponding to the given AST node's
  type. For example, an Identifier node will be wrapped in a chapel.Identifier.
 */
PyObject* wrapAstNode(ContextObject* context, const chpl::uast::AstNode* node);

/**
  Create a Python object of the class corresponding to the given Type*.
  For example, an ArrayType type will be wrapped in a chapel.ArrayType.
 */
PyObject* wrapType(ContextObject* context, const chpl::types::Type* node);

/**
  Creates a Python object of the class corresponding to the given Param*.
 */
PyObject* wrapParam(ContextObject* context, const chpl::types::Param* node);

/**
  Create a Python object from the given Location.
 */
PyObject* wrapLocation(chpl::Location loc);

#endif
