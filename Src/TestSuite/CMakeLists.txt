cmake_minimum_required(VERSION 3.1)

project(
	TestSuite
	VERSION 1.0.0
	DESCRIPTION "Test Suite"
	LANGUAGES CXX
)

set(EXECUTABLE_OUTPUT_PATH "${CMAKE_BINARY_DIR}/bin")
add_executable(TestSuite TestMain.cpp TestSample.cpp)

target_compile_features(TestSuite PRIVATE cxx_std_11)
target_compile_options(TestSuite PRIVATE -g -Og -Wall)

target_include_directories(TestSuite PRIVATE ../Include)

target_include_directories(TestSuite PRIVATE ${TestTarget_SOURCE_DIR})
target_link_libraries(TestSuite PRIVATE TestTarget)

target_include_directories(TestSuite PRIVATE ${gtest_SOURCE_DIR}/googletest/include)
target_link_libraries(TestSuite PRIVATE gtest)

set_target_properties(
	TestSuite
	PROPERTIES
	VERSION ${PROJECT_VERSION}
)

