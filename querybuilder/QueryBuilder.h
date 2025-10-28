#pragma once
#include <string>
#include <vector>

class QueryBuilder {
public:
    QueryBuilder& select(const std::vector<std::string>& fields);
    QueryBuilder& from(const std::string& table);
    QueryBuilder& where(const std::string& condition);
    std::string build() const;

private:
    std::vector<std::string> m_fields;
    std::string m_table;
    std::string m_condition;
};

