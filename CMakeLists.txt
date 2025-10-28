cmake_minimum_required(VERSION 3.5)

project(my_project LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)


set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#-------------------------------------
# Add submodules
#-------------------------------------
add_subdirectory(querybuilder)
add_subdirectory(wrapper)

#-------------------------------------
# Main executable
#-------------------------------------
add_executable(my_project
  main.cpp
)
target_link_libraries(my_project
    PRIVATE
            querybuilder

    )
