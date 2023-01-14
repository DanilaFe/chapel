/*
 * Copyright 2021-2023 Hewlett Packard Enterprise Development LP
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

#include "chpl/framework/query-impl.h"
#include "chpl/framework/ErrorBase.h"
#include "test-common.h"

using namespace chpl;

int main() {
  Context ctx;
  auto context = &ctx;
  auto err1 = CHPL_GET_ERROR(context, UseImportUnknownMod, ID(), resolution::VIS_IMPORT, "DoesNotExist");
  auto err2 = CHPL_GET_ERROR(context, UseImportUnknownMod, ID(), resolution::VIS_IMPORT, "DoesNotExist");
  std::cout << "------" << std::endl;
  std::cout << "Hash 1: " << chpl::hash(err1) << std::endl;
  std::cout << "Hash 2: " << chpl::hash(err2) << std::endl;
  assert(std::hash<std::remove_const<decltype(err1)>::type>{}(err1) == std::hash<std::remove_const<decltype(err2)>::type>{}(err2));
  auto err3 = CHPL_GET_ERROR(context, UseImportUnknownMod, ID(), resolution::VIS_IMPORT, "AlsoDoesNotExist");
  assert(err1 == err2);
  assert(err3 != err2);
  auto err4 = CHPL_GET_ERROR(context, UseImportNotModule, ID(), resolution::VIS_IMPORT, "ExistsButNotModule");
  auto err5 = CHPL_GET_ERROR(context, UseImportNotModule, ID(), resolution::VIS_IMPORT, "ExistsButNotModule");
  assert(err4 == err5);
}
