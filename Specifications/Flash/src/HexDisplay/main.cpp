#include <iostream>
#include <fstream>

#include "../misc/utils.h"

//#define HEX_FILE

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
	0b01011000, // C
	0b01011110, // D
	0b01111001, // E
	0b01110001  // F
};

int main()
{
	std::ofstream out{ "HEX.ROM", std::ios::out };
	
	for (int i = 0; i < 1 << 18; i++)
	{
		int data = 0;
		Hexlifier h{ (uint16_t)i, 0 };
		switch ((i >> 16) & 0b11)
		{
		case 0:
			data = (digits[(i >> 0) & 0xF]);
			break;
		case 1:
			data = (digits[(i >> 8) & 0xF]);
			break;
		case 2:
			data = (digits[(i >> 4) & 0xF]);
			break;
		case 3:
			data = (digits[(i >> 12) & 0xF]);
			break;
		}
		h.setData(data);
#ifdef HEX_FILE
		if (i > 0xFFFF)
		{
			Hexlifier e{ 0, uint64_t((i >> 16) & 0xff), 2 };
			e.setRecordType(4);
			out << e << '\n';
		}
		out << h << '\n';
#endif
#ifndef HEX_FILE
		out << (char)((uint8_t)data);
#endif

	}
	out.close();
}