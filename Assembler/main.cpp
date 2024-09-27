/* Copyright (c) 2012-2017 The ANTLR Project. All rights reserved.
 * Use of this file is governed by the BSD 3-clause license that
 * can be found in the LICENSE.txt file in the project root.
 */

//
//  main.cpp
//  antlr4-cpp-demo
//
//  Created by Mike Lischke on 13.03.16.
//

#include <iostream>

#include "antlr4-runtime.h"
#include "romASMLexer.h"
#include "romASMParser.h"
#include "romASMParserBaseVisitor.h"

#include <Windows.h>

#pragma execution_character_set("utf-8")

using namespace romASM;
using namespace antlr4;

int main(int argc, const char * argv[]) {

  ANTLRInputStream input("MOV r1, r2\nSUB r3, r2, r15\nlda R0 R5");
  romASMLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  romASMParser parser(&tokens);
  tree::ParseTree *tree = parser.program();

  auto s = tree->toStringTree(&parser);
  std::cout << "Parse Tree: " << s << std::endl;

  return 0;
}
