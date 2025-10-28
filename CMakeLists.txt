cmake_minimum_required(VERSION 3.10)
project(querybuilder)

set(CMAKE_CXX_STANDARD 17)
set(LIB_ALIAS isiran::querybuilder)

# Build the example
add_subdirectory(src)
add_subdirectory(example)
# add_subdirectory(test)


