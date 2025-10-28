add_library(querybuilder
    QueryBuilder.cpp
    QueryBuilder.h
)
target_include_directories(querybuilder
PUBLIC 
${CMAKE_CURRENT_SOURCE_DIR}
)
