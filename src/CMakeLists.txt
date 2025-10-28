set(LIBRARY_NAME querybuilder)

set(QUERYBUILDER_SOURCES
query_builder.cpp
my_project.cpp
query_builder_wrapper.cpp
)

set(QUERYBUILDER_HEADERS
query_builder.h
my_project.h
query_builder_wrapper.h
)

#add_subdirectory(third-party/spdlog)

add_library(${LIBRARY_NAME} STATIC ${QUERYBUILDER_SOURCES})

#define public in order we cane use library in test folder
# target_link_libraries(${LIBRARY_NAME} PUBLIC spdlog::spdlog)

# Keep headers associated with this target for IDEs, but do not propagate
target_sources(${LIBRARY_NAME} PRIVATE ${QUERYBUILDER_HEADERS})

target_include_directories(${LIBRARY_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Convenient namespaced alias for downstream targets
add_library(${LIB_ALIAS} ALIAS ${LIBRARY_NAME})

