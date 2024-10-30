#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>

class Hexlifier
{
	uint8_t byteCount = 1;
	uint16_t address = 0;
	uint64_t data = 0;
	uint8_t recordType = 0;
	uint8_t checksum = 0;
private:
	void calculateChecksum();

public:
	void setData(uint64_t m_data);
	void setRecordType(uint8_t m_recordType);
	Hexlifier() = default;
	Hexlifier(uint16_t m_address, uint64_t m_data, uint8_t m_byteCount = 1);
	friend std::ostream& operator<<(std::ostream& out, const Hexlifier& h);
};

namespace utils
{
	std::string toHex(int num, int digits);
}