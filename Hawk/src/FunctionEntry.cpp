#include "FunctionEntry.h"

FunctionEntry::FunctionEntry(ReturnType m_ret, std::string m_name, std::vector<VariableEntry> m_params):
    ret{m_ret},
    params{m_params}
{
    identifier = m_name;
}

FunctionEntry::FunctionEntry(ReturnType m_ret, std::string m_name) :
    ret{ m_ret }
{
    identifier = m_name;
}

VariableEntry FunctionEntry::getParam(int index)
{
    if (index < 0 || index >= params.size())
    {
        return { "NULL_VAR", VarType::INT };
    }
    return params[index];
}

void FunctionEntry::setName(std::string m_name)
{
    identifier = m_name;
}

void FunctionEntry::setReturnValue(ReturnType m_ret)
{
    ret = m_ret;
}

void FunctionEntry::clearParams()
{
    params.clear();
}

void FunctionEntry::appendParam(const VariableEntry& param)
{
    params.push_back(param);
}

EntryType FunctionEntry::getEntryType() const
{
    return entryType;
}

bool FunctionEntry::operator==(const FunctionEntry& other) const
{
    return ret == other.ret && params == other.params;
}

bool FunctionEntry::operator==(const StackEntry& other) const
{
    return identifier == other.getIdentifier();
}
