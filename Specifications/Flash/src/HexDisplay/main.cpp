#include <iostream>
#include <fstream>

#include "../misc/utils.h"

const uint8_t digits[16] =
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
	0b01110111, // A
	0b01111100, // B
	0b00111001, // C
	0b01011110, // D
	0b01111001, // E
	0b01110001  // F
};

int main()
{
	std::ofstream out{ "hexDisplay.hex", std::ios::out };
	out << "v2.0 raw\n";
	for (int i = 0; i < 1 << 18; i++)
	{
		Hexlifier h{ (uint16_t)i, 0 };
		switch ((i >> 16) & 0b11)
		{
		case 0:
			out << utils::toHex(digits[(i >> 0) & 0xF], 2) << '\n';
			break;
		case 1:
			out << utils::toHex(digits[(i >> 4) & 0xF], 2) << '\n';
			break;
		case 2:
			out << utils::toHex(digits[(i >> 8) & 0xF], 2) << '\n';
			break;
		case 3:
			out << utils::toHex(digits[(i >> 12) & 0xF], 2) << '\n';
			break;
		}
		if (i > 0xFFFF)
		{
			Hexlifier e{ 0, uint64_t((i >> 16) & 0xff), 2 };
			e.setRecordType(4);
			//out << e << '\n';
		}
		//out << h << '\n';

	}
	out.close();
}