cmake_minimum_required(VERSION 3.10)
project(querybuilder_example)

add_executable(example main.cpp)
target_link_libraries(example PRIVATE ${LIB_ALIAS})
