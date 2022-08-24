/*
 * Copyright 2020-2022 Hewlett Packard Enterprise Development LP
 * Copyright 2004-2019 Cray Inc.
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

#ifndef CHPL_UTIL_CHPLENV_H
#define CHPL_UTIL_CHPLENV_H

#include <map>
#include <unordered_map>

#include "llvm/Support/ErrorOr.h"
#include "subprocess.h"

namespace chpl {

using ChplEnvMap = std::unordered_map<std::string, std::string>;

void parseChplEnv(std::string& output, ChplEnvMap& into);

/**
  Run printchplenv and collect its output into a map.

  varMap
    additional environment variables to feed to printchplenv

  chplHome
    the CHPL_HOME environment variable, to locate printchplenv

  returns
    an error code if something went wrong while running printchplenv,
    or a map containing key-value pairs for each variable in
    printchplenv's output.
 */
template <typename InputMap>
llvm::ErrorOr<ChplEnvMap>
getChplEnv(const InputMap& varMap,
           const char* chplHome) {
  // Run printchplenv script, passing currently known CHPL_vars as well
  std::string command;

  // Pass known variables in varMap into printchplenv by prepending to command
  for (auto& ii : varMap)
    command += ii.first + "=" + ii.second + " ";

  command += "CHPLENV_SKIP_HOST=true ";
  command += "CHPLENV_SUPPRESS_WARNINGS=true ";
  command += std::string(chplHome) + "/util/printchplenv --all --internal --no-tidy --simple";

  auto commandOutput = getCommandOutput(command);
  if (auto err = commandOutput.getError()) {
    // forward error code
    return err;
  }
  ChplEnvMap result;
  parseChplEnv(commandOutput.get(), result);
  return result;
}

} // namespace chpl

#endif
