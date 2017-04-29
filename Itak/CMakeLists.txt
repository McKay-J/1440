cmake_minimum_required(VERSION 3.6)
project(Itak)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES Dictionary.h analyzer.cpp analyzer.h SampleData.csv DenialOfServiceAnalyzer.cpp DenialOfServiceAnalyzer.h PortScanAnalyzer.cpp PortScanAnalyzer.h Configuration.cpp Configuration.h ResultSet.cpp ResultSet.h Utils.cpp Utils.h)

set(TEST_FILES Test/TestMain.cpp)
add_executable(Test ${SOURCE_FILES} ${TEST_FILES})

add_executable(Itak main.cpp ${SOURCE_FILES})