cmake_minimum_required(VERSION 3.1)

project(
	UnitTest
	VERSION 1.0.0
	DESCRIPTION "Test Suite"
	LANGUAGES CXX
)

add_subdirectory(TestTarget)
add_subdirectory(TestSuite)

