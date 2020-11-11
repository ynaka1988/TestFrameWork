cmake_minimum_required(VERSION 3.1)

project(
	TestTarget
	VERSION 1.0.0
	DESCRIPTION "Test target"
	LANGUAGES CXX
)

file (GLOB CPPSRCS *.cpp)
file (GLOB HEADS *.h)

add_library(TestTarget STATIC ${HEADS} ${CPPSRCS})

target_compile_features(TestTarget PRIVATE cxx_std_98)
target_compile_options(TestTarget PRIVATE -g -Og -Wall)
target_include_directories(TestTarget PRIVATE ${UnitTest_SOURCE_DIR}/Include)

set_target_properties(
	TestTarget
	PROPERTIES
	VERSION ${PROJECT_VERSION}
)

