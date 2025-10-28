#include "query_builder_wrapper.h"

std::string QueryBuilderWrapper::buildQueryJson(
    const std::vector<std::string>& fields,
    const std::string& table,
    const std::string& condition
) const {
    QueryBuilder qb;
    std::string query = qb.select(fields).from(table).where(condition).build();

    nlohmann::json json;
    json["query"] = query;
    json["fields"] = fields;
    json["table"] = table;
    json["condition"] = condition;

    return json.dump(4); // pretty print JSON
}

