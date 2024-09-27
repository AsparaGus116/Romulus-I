# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

# If CMAKE_DISABLE_SOURCE_CHANGES is set to true and the source directory is an
# existing directory in our source tree, calling file(MAKE_DIRECTORY) on it
# would cause a fatal error, even though it would be a no-op.
if(NOT EXISTS "/c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/cmake/antlr4_runtime/src/antlr4_runtime")
  file(MAKE_DIRECTORY "/c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/cmake/antlr4_runtime/src/antlr4_runtime")
endif()
file(MAKE_DIRECTORY
  "/c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/cmake/antlr4_runtime/src/antlr4_runtime-build"
  "/c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/cmake/antlr4_runtime"
  "/c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/cmake/antlr4_runtime/tmp"
  "/c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/cmake/antlr4_runtime/src/antlr4_runtime-stamp"
  "/c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/cmake"
  "/c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/cmake/antlr4_runtime/src/antlr4_runtime-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/cmake/antlr4_runtime/src/antlr4_runtime-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/c/Users/gusbr/Desktop/CodingShit/Romulus-I/Assembler/cmake/antlr4_runtime/src/antlr4_runtime-stamp${cfgdir}") # cfgdir has leading slash
endif()
