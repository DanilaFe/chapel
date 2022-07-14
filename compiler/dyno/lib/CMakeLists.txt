# Copyright 2021-2022 Hewlett Packard Enterprise Development LP
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

execute_process(COMMAND python /Users/daniel.fedorin/Documents/software/chapel/util/chplenv/chpl_llvm.py --llvm-config
    WORKING_DIRECTORY /Users/daniel.fedorin/Documents/software/chapel
    OUTPUT_VARIABLE llvm_config_cmd
    OUTPUT_STRIP_TRAILING_WHITESPACE)
execute_process(COMMAND ${llvm_config_cmd} --cmakedir
    OUTPUT_VARIABLE llvm_cmakedir
    OUTPUT_STRIP_TRAILING_WHITESPACE)
find_package(LLVM REQUIRED PATHS ${llvm_cmakedir}
      NO_DEFAULT_PATH NO_PACKAGE_ROOT_PATH NO_CMAKE_PATH
      NO_CMAKE_ENVIRONMENT_PATH NO_SYSTEM_ENVIRONMENT_PATH
      NO_CMAKE_PACKAGE_REGISTRY
      NO_CMAKE_SYSTEM_PATH
      NO_CMAKE_SYSTEM_PACKAGE_REGISTRY)
llvm_map_components_to_libnames(LLVM_LIBS core support)


add_library(libdyno-obj OBJECT)

# turn on position-independent code so we can use the same
# dyno-obj for both a static and dynamic library
set_property(TARGET libdyno-obj PROPERTY POSITION_INDEPENDENT_CODE 1)

# Include the public library .h files as well as any generated .h files
target_include_directories(libdyno-obj PUBLIC
                           ${CHPL_MAIN_INCLUDE_DIR}
                           ${CHPL_INCLUDE_DIR}
                           ${LLVM_INCLUDE_DIRS})
target_compile_definitions(libdyno-obj PUBLIC ${LLVM_DEFINITIONS})
target_link_libraries(libdyno-obj ${LLVM_LIBS})


# Library code can also use headers from the lib/ directory
# but these are not to be public
target_include_directories(libdyno-obj PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(immediates)
add_subdirectory(parsing)
add_subdirectory(framework)
add_subdirectory(resolution)
add_subdirectory(types)
add_subdirectory(uast)
add_subdirectory(util)

add_library(libdyno SHARED $<TARGET_OBJECTS:libdyno-obj>)
target_include_directories(libdyno PUBLIC
                           ${CHPL_MAIN_INCLUDE_DIR}
                           ${CHPL_INCLUDE_DIR}
                           )
target_compile_definitions(libdyno PUBLIC ${LLVM_DEFINITIONS})
target_link_libraries(libdyno ${LLVM_LIBS})
