#pragma once

namespace utils
{
	void clearTerminal()
	{
#if defined(__linux__)
		system("clear");
#elif _WIN32
		system("cls");
#endif
	}

	std::string toHex(int x, int fill, bool header)
	{
		std::string result = "";
		while (x != 0 && result.size() < fill)
		{
			int digit = x % 16;
			x /= 16;
			if (digit <= 9)
			{
				result += (char)(digit + '0');
			}
			else
			{
				result += (char)(digit - 10 + 'A');
			}
		}
		while (result.size() < fill)
		{
			result += '0';
		}
		if (header)
		{
			result += "x0";
		}
		std::reverse(result.begin(), result.end());
		return result;
	}

	int fromHex(std::string str)
	{
		uint64_t x = 0;
		for (int i = 0; i < str.size(); i++)
		{
			x <<= 4;
			char c = toupper(str[i]);
			switch (c)
			{
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
				x += (c - '0');
				break;
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':
				x += (c - 'A' + 10);
				break;
			}
			
		}
		return static_cast<int>(x);
	}
}