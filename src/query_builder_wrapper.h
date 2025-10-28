#pragma once
#include <string>
#include "query_builder.h"

class QueryBuilderWrapper {
public:
    QueryBuilderWrapper() = default;

    std::string buildQueryJson(
        const std::vector<std::string>& fields,
        const std::string& table,
        const std::string& condition
    ) const;
};

