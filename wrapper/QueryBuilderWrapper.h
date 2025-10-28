#pragma once
#include <string>
#include <nlohmann/json.hpp>
#include "../querybuilder/QueryBuilder.h"

class QueryBuilderWrapper {
public:
    QueryBuilderWrapper() = default;

    std::string buildQueryJson(
        const std::vector<std::string>& fields,
        const std::string& table,
        const std::string& condition
    ) const;
};

