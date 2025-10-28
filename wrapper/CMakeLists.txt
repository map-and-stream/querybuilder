add_library(wrapper
    QueryBuilderWrapper.cpp
    QueryBuilderWrapper.h
)
target_include_directories(wrapper 
PUBLIC 
${CMAKE_CURRENT_SOURCE_DIR}
${PROJECT_SOURCE_DIR}/thirdparty
)
target_link_libraries(wrapper 
PUBLIC 
querybuilder
)

