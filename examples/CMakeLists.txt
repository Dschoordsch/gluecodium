# Copyright (C) 2016-2019 HERE Europe B.V.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
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
# SPDX-License-Identifier: Apache-2.0
# License-Filename: LICENSE

cmake_minimum_required(VERSION 3.6)
project(hello_world)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/../cmake/modules/")

# Allow testing with different C++ standard versions
if(NOT DEFINED HELLO_TEST_CPP_VERSION)
  set(HELLO_TEST_CPP_VERSION 11)
endif()
set(CMAKE_CXX_STANDARD ${HELLO_TEST_CPP_VERSION})

option(HELLO_BUILD_CPP_APP "Build example C++ apps" OFF)
option(HELLO_BUILD_IOS_APP "Build example iOS apps" OFF)
set(HELLO_APIGEN_GLUECODIUM_GENERATOR "cpp,android,swift" CACHE STRING "Gluecodium generator(s) to use [defaults to: cpp,android,swift]")

# Ensure that symbols are properly exported.
set(CMAKE_CXX_VISIBILITY_PRESET hidden)
set(CMAKE_C_VISIBILITY_PRESET hidden)

enable_testing()
add_subdirectory(libhello)
add_subdirectory(platforms)
