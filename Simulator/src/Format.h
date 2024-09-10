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
	void blink()
	{
		std::cout << "\033[5m";
	}

	void setTextColorNB(Color c, bool fg)
	{
		int x = 30;
		if (!fg)
		{
			x += 10;
		}
		std::cout << "\033[" << c + x << "m";
	}

	void setTextColor(Color c, bool fg)
	{
		int x = 30;
		if (!fg)
		{
			x += 10;
		}
		std::cout << "\033[" << c + x << ";1m";
	}

	void resetTextColor()
	{
		std::cout << "\033[0m";
	}
}