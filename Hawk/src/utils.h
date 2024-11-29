#include <string>
#include <iostream>

#pragma once

class utils
{
public:
	static int totalErrors;

	static int getTotalErrors();

	static void error(int lineNumber, int columnNumber, std::string message);
};

