# Add GoogleTest
add_subdirectory(googletest)

# Enable testing
enable_testing()

# Create your test target
add_executable(test_querybuilder test_querybuilder.cpp)

# Link against GoogleTest and pthread
target_link_libraries(test_querybuilder 
PRIVATE 
    ${LIB_ALIAS}
    GTest::gtest
    GTest::gtest_main
    pthread
)

include(GoogleTest)
gtest_discover_tests(test_querybuilder)

