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

#include "chpl/util/iteration.h"

#include <cassert>
#include <cstddef>

#include <vector>
#include <unordered_set>
#include "chpl/uast/AstList.h"
#include "chpl/uast/all-uast.h"
#include <unistd.h>

// always check assertions in this test
#ifdef NDEBUG
#undef NDEBUG
#endif

using namespace chpl;
using namespace uast;

static void test1() {
  Context ctx;
  auto context = &ctx;
  AstList astList;
  auto builder = Builder::createForIncludedModule(context, "input.chpl", UniqueString::get(context, ""));
  astList.push_back(IntLiteral::build(builder.get(), Location(), 1, UniqueString::get(context, "1")));
  assert(astList.size() == 1);
  astList.push_back(IntLiteral::build(builder.get(), Location(), 2, UniqueString::get(context, "2")));
  assert(astList.size() == 2);

  auto firstItem = astList.take(astList.begin());
  assert(firstItem->toIntLiteral()->value() == 1);
  assert(astList.size() == 1);
  auto borrowedSecond = astList[0];
  assert(borrowedSecond->toIntLiteral()->value() == 2);
  assert(astList.size() == 1);
}

static void test2() {
  Context ctx;
  auto context = &ctx;
  AstList astList;
  auto builder = Builder::createForIncludedModule(context, "input.chpl", UniqueString::get(context, ""));
  astList.push_back(IntLiteral::build(builder.get(), Location(), 1, UniqueString::get(context, "1")));
  astList.push_back(IntLiteral::build(builder.get(), Location(), 2, UniqueString::get(context, "2")));

  std::vector<owned<AstNode>> dest;
  astList.consume(std::back_inserter(dest));
  assert(dest.size() == 2);
  assert(astList.size() == 0);
  assert(dest[0]->toIntLiteral()->value() == 1);
  assert(dest[1]->toIntLiteral()->value() == 2);
}

static void test3() {
  Context ctx;
  auto context = &ctx;
  AstList astList;
  auto builder = Builder::createForIncludedModule(context, "input.chpl", UniqueString::get(context, ""));
  astList.push_back(IntLiteral::build(builder.get(), Location(), 1, UniqueString::get(context, "1")));
  astList.push_back(IntLiteral::build(builder.get(), Location(), 2, UniqueString::get(context, "2")));

  std::vector<owned<AstNode>> dest;
  astList.take_each([&dest](auto ast) {
    dest.push_back(std::move(ast));
  });
  assert(dest.size() == 2);
  assert(astList.size() == 0);
  assert(dest[0]->toIntLiteral()->value() == 1);
  assert(dest[1]->toIntLiteral()->value() == 2);
}

static AstNode* keepOnlyFirst(AstList lst) {
  AstNode* first = lst.release(lst.begin());
  return first;
}

static void test4() {
  Context ctx;
  auto context = &ctx;
  AstList astList;
  auto builder = Builder::createForIncludedModule(context, "input.chpl", UniqueString::get(context, ""));
  astList.push_back(IntLiteral::build(builder.get(), Location(), 1, UniqueString::get(context, "1")));
  astList.push_back(IntLiteral::build(builder.get(), Location(), 2, UniqueString::get(context, "2")));
  astList.push_back(IntLiteral::build(builder.get(), Location(), 3, UniqueString::get(context, "3")));
  astList.push_back(IntLiteral::build(builder.get(), Location(), 4, UniqueString::get(context, "4")));
  astList.push_back(IntLiteral::build(builder.get(), Location(), 5, UniqueString::get(context, "5")));

  auto first = keepOnlyFirst(std::move(astList));
  assert(first->toIntLiteral()->value() == 1);
  delete first;
}

static void test5() {
  Context ctx;
  auto context = &ctx;
  AstList astList;
  auto builder = Builder::createForIncludedModule(context, "input.chpl", UniqueString::get(context, ""));
  astList.push_back(IntLiteral::build(builder.get(), Location(), 1, UniqueString::get(context, "1")));
  astList.push_back(IntLiteral::build(builder.get(), Location(), 2, UniqueString::get(context, "2")));
  astList.push_back(IntLiteral::build(builder.get(), Location(), 3, UniqueString::get(context, "3")));
  astList.push_back(IntLiteral::build(builder.get(), Location(), 4, UniqueString::get(context, "4")));
  astList.push_back(IntLiteral::build(builder.get(), Location(), 5, UniqueString::get(context, "5")));

  int sum = 0;
  for (auto& node : astList) {
    sum += node->toIntLiteral()->value();
  }
  assert(sum == 15);

  for (const auto& node : AstListIteratorPair<AstNode>(astList.begin(), astList.end())) {
    sum += node->toIntLiteral()->value();
  }
  assert(sum == 30);
}


int main(int argc, char** argv) {
  sleep(1);
  test1();
  test2();
  test3();
  test4();
  test5();
  return 0;
}
