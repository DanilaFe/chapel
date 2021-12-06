/*
 * Copyright 2021 Hewlett Packard Enterprise Development LP
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

#ifndef CHPL_TYPES_TYPE_H
#define CHPL_TYPES_TYPE_H

#include "chpl/queries/Context.h"
#include "chpl/types/TypeClasses.h"
#include "chpl/types/TypeTag.h"

namespace chpl {
namespace uast {
  class Decl;
}
namespace types {


/**
  This is the base class for classes that represent a type.

  Functions like someType->isRecord() / someType->toRecord() are available and
  generated for all Type subclasses.

 */
class Type {
 private:
  TypeTag tag_;

 protected:
  /**
    This function needs to be defined by subclasses.
    It should check only those fields defined in subclasses
    (it should not check the Type fields such as tag_).
    It can assume that other has the same type as the receiver.
   */
  virtual bool contentsMatchInner(const Type* other) const = 0;

  /**
   This function needs to be defined by subclasses.
   It should call the 'mark' method on any UniqueStrings
   stored as fields.
   */
  virtual void markUniqueStringsInner(Context* context) const = 0;

 public:
  /**
   This function needs to be defined by subclasses.
   It returns 'true` if the type represents a generic type.
   */
  virtual bool isGeneric() const = 0;

 protected:
  Type(TypeTag tag)
    : tag_(tag) {
  }

 public:
  virtual ~Type() = 0; // this is an abstract base class

  /**
    Returns the tag indicating which Type subclass this is.
   */
  TypeTag tag() const {
    return tag_;
  }

  bool operator==(const Type& other) const {
    return completeMatch(&other);
  }
  bool operator!=(const Type& other) const {
    return !(*this == other);
  }

  static void gatherBuiltins(Context* context,
                             std::unordered_map<UniqueString,const Type*>& map);

  bool completeMatch(const Type* other) const;

  // 'keep' is some old Type
  // 'addin' is some new Type we wish to combine with it
  //
  // on exit, 'keep' stores the Type we need to keep, and anything
  // not kept is stored in 'addin'.
  // the function returns 'true' if anything changed in 'keep'.
  static bool updateType(owned<Type>& keep, owned<Type>& addin);

  static void markType(Context* context, const Type* keep);

  static void dump(const Type* type, int leadingSpaces=0);

  virtual std::string toString() const;

  // define is__ methods for the various Type subclasses
  // using macros and TypeClassesList.h
  /// \cond DO_NOT_DOCUMENT
  #define TYPE_IS(NAME) \
    bool is##NAME() const { \
      return typetags::is##NAME(this->tag_); \
    }
  #define TYPE_NODE(NAME) TYPE_IS(NAME)
  #define BUILTIN_TYPE_NODE(NAME, CHPL_NAME_STR) TYPE_IS(NAME)
  #define TYPE_BEGIN_SUBCLASSES(NAME) TYPE_IS(NAME)
  #define TYPE_END_SUBCLASSES(NAME)
  /// \endcond
  // Apply the above macros to TypeClassesList.h
  #include "chpl/types/TypeClassesList.h"
  // clear the macros
  #undef TYPE_NODE
  #undef BUILTIN_TYPE_NODE
  #undef TYPE_BEGIN_SUBCLASSES
  #undef TYPE_END_SUBCLASSES
  #undef TYPE_IS

  // Additional helper functions

  /** returns true if it's string, bytes, or c_string type */
  bool isStringLikeType() const {
    return isStringType() || isBytesType() || isCStringType();
  }
  /** returns true if it's an int or uint type of any width */
  bool isIntegralType() const {
    return isIntType() || isUintType();
  }
  /** returns true if it's a numeric type of any width; that includes
      int, uint, real, imag, complex */
  bool isNumericType() const {
    return isIntType() || isUintType() ||
           isRealType() || isImagType() ||
           isComplexType();
  }

  /** returns true if it's a numeric type or bool type
      of any width */
  bool isNumericOrBoolType() const {
    return isNumericType() || isBoolType();
  }

  /** returns true for a type that is a kind of pointer */
  bool isAnyPtrType() const {
    return isClassType() || isCFnPtrType() || isCVoidPtrType();
  }

  /** If 'this' is a CompositeType, return it.
      If 'this' is a ClassType, return the basicClassType.
      Otherwise, returns nullptr.
   */
  const CompositeType* getCompositeType() const;

  // define to__ methods for the various Type subclasses
  // using macros and TypeClassesList.h
  // Note: these offer equivalent functionality to C++ dynamic_cast<DstType*>
  /// \cond DO_NOT_DOCUMENT
  #define TYPE_TO(NAME) \
    const NAME * to##NAME() const { \
      return this->is##NAME() ? (const NAME *)this : nullptr; \
    } \
    NAME * to##NAME() { \
      return this->is##NAME() ? (NAME *)this : nullptr; \
    }
  #define TYPE_NODE(NAME) TYPE_TO(NAME)
  #define BUILTIN_TYPE_NODE(NAME, CHPL_NAME_STR) TYPE_TO(NAME)
  #define TYPE_BEGIN_SUBCLASSES(NAME) TYPE_TO(NAME)
  #define TYPE_END_SUBCLASSES(NAME)
  /// \endcond
  // Apply the above macros to TypeClassesList.h
  #include "chpl/types/TypeClassesList.h"
  // clear the macros
  #undef TYPE_NODE
  #undef BUILTIN_TYPE_NODE
  #undef TYPE_BEGIN_SUBCLASSES
  #undef TYPE_END_SUBCLASSES
  #undef TYPE_TO
};


} // end namespace types
} // end namespace chpl

// TODO: is there a reasonable way to define std::less on Type*?
// Comparing pointers would lead to some nondeterministic ordering.

#endif
