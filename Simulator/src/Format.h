#pragma once
#include <iostream>

enum Color
{
	BLACK,
	RED,
	GREEN,
	YELLOW,
	BLUE,
	MAGENTA,
	CYAN,
	WHITE
};

namespace format
{
	void setTextColor(Color c)
	{
		std::cout << "\033[" << c + 30 << ";1m";
	}

	void resetTextColor()
	{
		std::cout << "\033[0m";
	}
}