#include <iostream>
#include <fstream>
#include "chip.h"
#include "../misc/utils.h"

#define HEX
#define ROM

int main()
{

	Chip c1{ 1 };
	Chip c2{ 2 };
	Chip c3{ 3 };

#ifdef HEX

	std::ofstream u1_hex;
	std::ofstream u2_hex;
	std::ofstream u3_hex;

	u1_hex.open("../../Specifications/Flash/hex_files/ALU_U1.hex", std::ios::out);
	u2_hex.open("../../Specifications/Flash/hex_files/ALU_U2.hex", std::ios::out);
	u3_hex.open("../../Specifications/Flash/hex_files/ALU_U3.hex", std::ios::out);

	u1_hex << "v2.0 raw\n";
	u2_hex << "v2.0 raw\n";
	u3_hex << "v2.0 raw\n";

#endif
#ifdef ROM

	std::ofstream u1_rom;
	std::ofstream u2_rom;
	std::ofstream u3_rom;

	u1_rom.open("../../Specifications/Flash/rom_files/ALU_U1.ROM", std::ios::out);
	u2_rom.open("../../Specifications/Flash/rom_files/ALU_U2.ROM", std::ios::out);
	u3_rom.open("../../Specifications/Flash/rom_files/ALU_U3.ROM", std::ios::out);

#endif

	for (int i = 0; i < (1 << 17); i++)
	{
		c1.setAddress(i);
		c2.setAddress(i);
		c3.setAddress(i);

		uint8_t u1_data = 0;
		uint8_t u2_data = 0;
		uint8_t u3_data = 0;

		switch (i >> 13) // opcode
		{
		case 0x9:
			c3.setCarry(1);
		case 0x8:
			u3_data = c3.compute();
			u2_data = c2.compute();
			u1_data = c1.compute();
			break;
		case 0xA:
		case 0xB:
			u1_data = c1.compute();
			u2_data = c2.compute();
			u3_data = c3.compute();
			break;
		default:
			u1_data = c1.compute();
			u2_data = c2.compute();
			u3_data = c3.compute();
			break;
		}

#ifdef HEX
		u1_hex << utils::toHex(u1_data, 2) << '\n';
		u2_hex << utils::toHex(u2_data, 2) << '\n';
		u3_hex << utils::toHex(u3_data, 2) << '\n';
#endif
#ifdef ROM
		u1_rom << u1_data;
		u2_rom << u2_data;
		u3_rom << u3_data;
#endif

		// in subtraction, set the U3 carry in flag
	}

#ifdef HEX
	u1_hex.close();
	u2_hex.close();
	u3_hex.close();
#endif

#ifdef ROM
	u1_rom.close();
	u2_rom.close();
	u3_rom.close();
#endif
	
}