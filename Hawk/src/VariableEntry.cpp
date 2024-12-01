#include "VariableEntry.h"

VariableEntry::VariableEntry(std::string m_id, VarType m_type, uint16_t m_size):
    type{ m_type },
    size{m_size}
{
    identifier = m_id;
}

EntryType VariableEntry::getEntryType() const
{
    return entryType;
}

uint16_t VariableEntry::getLocation() const
{
    if (storedRegister == Regs::NIL)
    {
        return -1;
    }
    else
    {
        return location;
    }
}

Regs VariableEntry::getReg() const 
{
    return storedRegister;
}

uint16_t VariableEntry::getSize() const
{
    return size;
}

VarType VariableEntry::getType() const
{
    return type;
}

void VariableEntry::setLocation(uint16_t x)
{
    location = x;
}

void VariableEntry::setReg(Regs reg)
{
    storedRegister = reg;
}

void VariableEntry::setSize(uint16_t s)
{
    size = s;
}

bool VariableEntry::operator==(const VariableEntry& other) const
{
    return (identifier == other.identifier) && (type == other.type);
}

bool VariableEntry::operator==(const StackEntry& other) const
{
    return identifier == other.getIdentifier();
}

VariableEntry& VariableEntry::operator=(const VariableEntry& other)
{
    identifier = other.identifier;
    type = other.type;
    size = other.size;
    storedRegister = other.storedRegister;
    location = other.location;
    return *this;
}
