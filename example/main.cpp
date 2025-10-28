#include <iostream>
#include "query_builder_wrapper.h"

int main() {
    QueryBuilderWrapper wrapper;
    std::string json = wrapper.buildQueryJson({"id", "name"}, "users", "age > 18");

    std::cout << json << std::endl;
    return 0;
}
