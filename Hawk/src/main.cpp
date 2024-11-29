#pragma once

#include "antlr4-runtime.h"
#include "hawkLexer.h"
#include "hawkParser.h"
#include "hawkParserBaseVisitor.h"
#include "hawkParserVisitor.h"

#include <iostream>
#include <string>
#include <stack>
#include <fstream>

#include "StackEntry.h"
//#include "utils.h"
#include "Visitor.h"


using namespace antlr4;
using namespace hawk;

int main(int argc, char* argv[])
{
    std::ifstream stream;
    stream.open(argv[1]);
    ANTLRInputStream input(stream);
    hawkLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    hawkParser parser(&tokens);

    tree::ParseTree* tree = parser.program();

    // Create a visitor and evaluate the parse tree
    Visitor visitor;
    std::string result = std::any_cast<std::string>(visitor.visitProgram(dynamic_cast<hawkParser::ProgramContext*>(tree)));

    if (utils::getTotalErrors() > 0)
    {
        std::cout << "Compilation unsuccessful; " << utils::getTotalErrors() << " error(s).\n";
    }
    else
    {
        std::cout << "Compilation successful.\n";
    }
    system("pause");
    return 0;
}