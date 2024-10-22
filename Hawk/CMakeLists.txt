# minimum required CMAKE version
CMAKE_MINIMUM_REQUIRED(VERSION 3.7 FATAL_ERROR)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

# compiler must be 17
set(CMAKE_CXX_STANDARD 17)

# required if linking to static library
add_definitions(-DANTLR4CPP_STATIC)

# using /MD flag for antlr4_runtime (for Visual C++ compilers only)
set(ANTLR4_WITH_STATIC_CRT OFF)

# Specify the version of the antlr4 library needed for this project.
# By default the latest version of antlr4 will be used.  You can specify a
# specific, stable version by setting a repository tag value or a link
# to a zip file containing the libary source.
# set(ANTLR4_TAG 4.13.2)
# set(ANTLR4_ZIP_REPOSITORY https://github.com/antlr/antlr4/archive/refs/tags/4.13.2.zip)

# add external build for antlrcpp
include(ExternalAntlr4Cpp)
# add antlr4cpp artifacts to project environment
include_directories(${ANTLR4_INCLUDE_DIRS})

# set variable pointing to the antlr tool that supports C++
# this is not required if the jar file can be found under PATH environment
set(ANTLR_EXECUTABLE C:/Users/gusbr/Desktop/CodingShit/Romulus-I/Hawk/antlr-4.13.2-complete.jar)
# add macros to generate ANTLR Cpp code from grammar
find_package(ANTLR REQUIRED)

set(CMAKE_FIND_LIBRARY_SUFFIXES ".lib")

# Call macro to add lexer and grammar to your build dependencies.
antlr_target(hawkLexer hawkLexer.g4 LEXER
             PACKAGE hawk)
antlr_target(hawkParser hawkParser.g4 PARSER
             PACKAGE hawk
             DEPENDS_ANTLR hawkLexer
             COMPILE_FLAGS -lib ${ANTLR_hawkLexer_OUTPUT_DIR} -visitor)

# include generated files in project environment
include_directories(${ANTLR_hawkLexer_OUTPUT_DIR})
include_directories(${ANTLR_hawkParser_OUTPUT_DIR})



set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} /MD")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /MD")

# add generated grammar to demo binary target
add_executable(hawk main.cpp
               ${ANTLR_hawkLexer_CXX_OUTPUTS}
               ${ANTLR_hawkParser_CXX_OUTPUTS})
target_link_libraries(hawk antlr4_static)

set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MT")