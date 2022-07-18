/*
 * Copyright 2021-2022 Hewlett Packard Enterprise Development LP
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

#include "chpl/uast/ASTTypes.h"

#include "chpl/framework/Context.h"
#include "chpl/uast/AstNode.h"

namespace chpl {
namespace uast {

AstList::~AstList() {
  for (auto& node : nodes_) {
    delete node;
  }
}

AstList::iterator AstList::erase(AstList::iterator pos) {
  delete *pos;
  return nodes_.erase(pos);
}

std::vector<owned<AstNode>> AstList::toOwnedVector(AstList lst) {
  std::vector<owned<AstNode>> into;
  lst.consume(std::back_inserter(into));
  return into;
}

AstList AstList::fromOwnedVector(std::vector<owned<AstNode>> lst) {
  AstList into;
  for (auto& ptr : lst) {
    into.push_back(std::move(ptr));
  }
  return into;
}

bool updateAstList(AstList& keep, AstList& addin) {
  /*
   It's kind of like swapping 'keep' and 'addin' but it tries
   to keep old AST nodes when they are the same. This allows
   for more reuse of results in the query framework.

   'keep' is some old AST
   'addin' is some new AST we wish to replace it with

   on exit, 'keep' stores the AST we need to keep, and anything
   not kept is stored in 'addin'.

   The function returns 'true' if anything changed in 'keep'.
   */
  size_t keepSize = keep.size();
  size_t addinSize = addin.size();
  size_t keepIdx = 0;
  size_t addinIdx = 0;
  bool anyChanged = false;

  // handle some common short scenarios directly
  if (keepSize == 0 && addinSize == 0) {
    // both have zero length
    return false;
  } else if (keepSize == 0 || addinSize == 0) {
    // one has zero length but the other does not
    keep.swap(addin);
    return true;
  } else if (keepSize == 1 && addinSize == 1) {
    // TODO cleaner way of doing this?
    auto keepFirst = toOwned(keep[0]);
    auto addinFirst = toOwned(addin[0]);
    bool changed = AstNode::update(keepFirst, addinFirst);
    *keep.begin() = keepFirst.release();
    *addin.begin() = addinFirst.release();
    return changed;
  }

  auto keepVec = AstList::toOwnedVector(std::move(keep));
  auto addinVec = AstList::toOwnedVector(std::move(addin));

  AstList newList;
  AstList junkList;

  // Append the elements from addin to newList, but
  // if we find an existing element that matches,
  // keep that.

  // checks for:
  //   insertion
  //   deletion
  //   replacement
  while (addinIdx < addinSize) {
    bool eltChanged = true;
    if (keepIdx < keepSize &&
        keepVec[keepIdx]->shallowMatch(addinVec[addinIdx].get())) {
      owned<AstNode> keepElt;
      owned<AstNode> addinElt;
      keepElt.swap(keepVec[keepIdx]);
      addinElt.swap(addinVec[addinIdx]);
      // it seems like a close enough match, so update it
      eltChanged = AstNode::update(keepElt, addinElt);
      // updateAST might have swapped the elements but
      // now keepElt is the one to put in newList.
      newList.push_back(std::move(keepElt));
      // put the other thing in junkList
      junkList.push_back(std::move(addinElt));
      addinIdx++;
      keepIdx++;
    } else if (keepIdx < keepSize && addinIdx+1 < addinSize &&
               keepVec[keepIdx]->shallowMatch(addinVec[addinIdx+1].get())) {
      // like an element was added in addin,
      // so add two elements from addin and pass 1 keep element
      owned<AstNode> keepElt;
      owned<AstNode> addinEltOne;
      owned<AstNode> addinEltTwo;
      keepElt.swap(keepVec[keepIdx]);
      addinEltOne.swap(addinVec[addinIdx]);
      addinEltTwo.swap(addinVec[addinIdx+1]);

      // keepElt matched addinEltTwo so try to update them
      AstNode::update(keepElt, addinEltTwo);
      // now keepElt is the one to keep and addinEltTwo is junk
      newList.push_back(std::move(addinEltOne));
      newList.push_back(std::move(keepElt));
      junkList.push_back(std::move(addinEltTwo));
      addinIdx += 2;
      keepIdx++;
    } else if (keepIdx+1 < keepSize &&
               keepVec[keepIdx+1]->shallowMatch(addinVec[addinIdx].get())) {
      // like an element was deleted from keep,
      // so add an element from addin but pass 2 keep elements
      owned<AstNode> addinElt;
      owned<AstNode> keepEltOne;
      owned<AstNode> keepEltTwo;
      addinElt.swap(addinVec[addinIdx]);
      keepEltOne.swap(keepVec[keepIdx]);
      keepEltTwo.swap(keepVec[keepIdx+1]);

      // keepEltTwo matched addinElt so try to update them
      AstNode::update(keepEltTwo, addinElt);
      // now keepEltTwo is the one to keep and addinElt is junk
      newList.push_back(std::move(keepEltTwo));
      junkList.push_back(std::move(keepEltOne));
      junkList.push_back(std::move(addinElt));
      addinIdx++;
      keepIdx += 2;
    } else if (keepIdx+1 < keepSize && addinIdx+1 < addinSize &&
               keepVec[keepIdx+1]->shallowMatch(addinVec[addinIdx+1].get())) {
      // like an element was replaced from keep,
      // so add 2 elements from addin and pass 2 keep elements
      owned<AstNode> addinEltOne;
      owned<AstNode> addinEltTwo;
      owned<AstNode> keepEltOne;
      owned<AstNode> keepEltTwo;
      addinEltOne.swap(addinVec[addinIdx]);
      addinEltTwo.swap(addinVec[addinIdx+1]);
      keepEltOne.swap(keepVec[keepIdx]);
      keepEltTwo.swap(keepVec[keepIdx+1]);

      // keepEltTwo matched addinEltTwo so try to update them
      AstNode::update(keepEltTwo, addinEltTwo);
      // now keepEltTwo is the one to keep and addinEltTwo is junk
      newList.push_back(std::move(addinEltOne));
      newList.push_back(std::move(keepEltTwo));
      junkList.push_back(std::move(keepEltOne));
      junkList.push_back(std::move(addinEltTwo));
      addinIdx += 2;
      keepIdx += 2;
    } else {
      // give up on trying to match things
      anyChanged = true;
      break;
    }

    anyChanged |= eltChanged;
  }

  // if we gave up trying to match things, we end up in this loop
  for (; addinIdx < addinSize; addinIdx++) {
    owned<AstNode> addinElt;
    addinElt.swap(addinVec[addinIdx]);
    newList.push_back(std::move(addinElt));
    anyChanged = true;
  }
  for (; keepIdx < keepSize; keepIdx++) {
    owned<AstNode> keepElt;
    keepElt.swap(keepVec[keepIdx]);
    junkList.push_back(std::move(keepElt));
    anyChanged = true;
  }

  assert(newList.size() == addinVec.size());
  // Swap the lists into place.
  keep.swap(newList);
  addin.swap(junkList);

  return anyChanged;
}

void markAstList(Context* context, const AstList& keep) {
  for (const auto& elt: keep) {
    context->markOwnedPointer(elt);
  }
}


} // end namespace uast
} // end namespace chpl
