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
#include <fstream>
#include <string>

#include "antlr4-runtime.h"
#include "romASMLexer.h"
#include "romASMParser.h"
#include "Listener.h"

#include <Windows.h>

#pragma execution_character_set("utf-8")

using namespace romASM;
using namespace antlr4;

int main(int argc, const char * argv[]) {
  std::string outfname = "a.txt";

  std::ifstream file;
  if(argc >= 2)
  {
	file.open(argv[1], std::ios::in);
	if(!file.good())
	{
		std::cout << "ERROR OPENING FILE\n";
		return 0;
	}
	ANTLRInputStream input(file);
	romASMLexer lexer(&input);
	CommonTokenStream tokens(&lexer);

	romASMParser parser(&tokens);
	tree::ParseTree *tree = parser.program();

	auto s = tree->toStringTree(&parser);
	
	if (lexer.getNumberOfSyntaxErrors() > 0) {
        std::cerr << "Lexer failed with " << lexer.getNumberOfSyntaxErrors() << " error(s)." << std::endl;
        return -1; // Stop the program
    }
	
	if (parser.getNumberOfSyntaxErrors() > 0) {
        std::cerr << "Parsing failed with " << parser.getNumberOfSyntaxErrors() << " error(s)." << std::endl;
        return -1; // Stop the program
    }
	std::cout << "Parse Tree: " << s << std::endl;
	
	Listener listener{outfname};
	
	antlr4::tree::ParseTreeWalker walker;
	
	walker.walk(&listener, tree);
	
    walker.walk(&listener, tree);
  }
  

  return 0;
}
