cmake_minimum_required(VERSION 3.29)
project(cpp_gtest_example)

set(CMAKE_CXX_STANDARD 20)

# Enable testing
enable_testing()

# Find GoogleTest package
find_package(GTest REQUIRED)

# Main application
add_executable(cpp_gtest_example main.cpp rational.h)

# Tests
add_executable(tests test.cpp rational.h)

# Link GoogleTest to the test executable
target_link_libraries(tests GTest::GTest GTest::Main)

# Register the tests with CMake
add_test(NAME MyTests COMMAND tests)
