#include "utils.h"

void Hexlifier::calculateChecksum()
{
    uint8_t sum = 0;
    sum += byteCount;
    sum += recordType;
    for (int i = 0; i < byteCount; i++)
    {
        sum += ((data >> (8 * i)) & 0xff);
    }
    sum += address & 0xff;
    sum += (address >> 8) & 0xff;
    checksum = ~sum + 1;
}

void Hexlifier::setData(uint64_t m_data)
{
    data = m_data;
    calculateChecksum();
}

void Hexlifier::setRecordType(uint8_t m_recordType)
{
    recordType = m_recordType;
    calculateChecksum();
}

Hexlifier::Hexlifier(uint16_t m_address, uint64_t m_data, uint8_t m_byteCount):
    address{m_address},
    data{m_data},
    byteCount{m_byteCount}
{
    calculateChecksum();
}

std::string utils::toHex(int num, int digits)
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

std::ostream& operator<<(std::ostream& out, const Hexlifier& h)
{
    out << ":"
        << utils::toHex(h.byteCount, 2)
        << utils::toHex(h.address, 4)
        << utils::toHex(h.recordType, 2)
        << utils::toHex(h.data, 2 * h.byteCount)
        << utils::toHex(h.checksum, 2);
    return out;
}
