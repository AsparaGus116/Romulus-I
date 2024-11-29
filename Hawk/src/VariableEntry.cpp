#include "VariableEntry.h"

VariableEntry::VariableEntry(std::string m_id, VarType m_type):
    identifier{m_id},
    type{m_type}
{
}

VariableEntry::VariableEntry(std::string m_id, VarType m_type, uint16_t m_value):
    identifier{ m_id },
    type{ m_type },
    value{m_value}
{
}

EntryType VariableEntry::getEntryType()
{
    return EntryType::VARIABLE;
}
