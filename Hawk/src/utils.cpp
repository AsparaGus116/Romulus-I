#include "utils.h"

int utils::totalErrors{ 0 };

int utils::getTotalErrors()
{
	return totalErrors;
}

void utils::error(int lineNumber, int columnNumber, std::string message)
{
	std::cout << "ERROR<" << lineNumber << ":" << columnNumber << "> " << message << '\n';
	utils::totalErrors++;
}
