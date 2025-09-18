#include <iostream>
#include <fstream>
#include <cstdint>
#include <string>
#include <algorithm>

std::string toHex(int num, int digits)
{
    std::string ret = "";
    for (int i = 0; i < digits; i++)
    {
        int x = num % 16;
        if (x <= 9)
        {
            ret += (x + '0');
        }
        else
        {
            ret += (x + 'A' - 10);
        }
        num /= 16;
    }
    std::reverse(ret.begin(), ret.end());
    return ret;
}

const uint8_t digits[10] =
{
	0b00111111, // 0
	0b00000110, // 1
	0b01011011, // 2
	0b01001111, // 3
	0b01100110, // 4
	0b01101101, // 5
	0b01111101, // 6
	0b00000111, // 7
	0b01111111, // 8
	0b01101111, // 9
};

int main()
{
	std::ofstream out{ "HEX.hex", std::ios::out };
	out << "v2.0 raw\n";
	
	for (int i = 0; i < 1 << 18; i++)
	{
		int data = 0;
		switch ((i >> 16) & 0b11)
		{
		case 0:
			data = (digits[(i % 10) & 0xF]);
			break;
		case 1:
			data = (digits[(i / 10 % 10) & 0xF]);
			break;
		case 2:
			data = (digits[(i / 100 % 10) & 0xF]);
			break;
		case 3:
			data = (digits[(i / 1000 % 10) & 0xF]);
			break;
		}
		out << toHex(data, 2) << '\n';
	}
	out.close();
}