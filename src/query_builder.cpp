#include "QueryBuilder.h"
#include <sstream>

QueryBuilder& QueryBuilder::select(const std::vector<std::string>& fields) {
    m_fields = fields;
    return *this;
}

QueryBuilder& QueryBuilder::from(const std::string& table) {
    m_table = table;
    return *this;
}

QueryBuilder& QueryBuilder::where(const std::string& condition) {
    m_condition = condition;
    return *this;
}

std::string QueryBuilder::build() const {
    std::ostringstream oss;
    oss << "SELECT ";
    for (size_t i = 0; i < m_fields.size(); ++i) {
        oss << m_fields[i];
        if (i != m_fields.size() - 1)
            oss << ", ";
    }
    oss << " FROM " << m_table;
    if (!m_condition.empty())
        oss << " WHERE " << m_condition;
    return oss.str();
}

