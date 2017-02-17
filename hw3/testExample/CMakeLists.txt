cmake_minimum_required(VERSION 3.6)
project(testExample)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES Utils.h Utils.cpp)
add_executable(Main main.cpp ${SOURCE_FILES})

set(TEST_FILES Testing/UtilsTester.cpp Testing/UtilsTester.h)
add_executable(Test Testing/testMain.cpp ${SOURCE_FILES} ${TEST_FILES})