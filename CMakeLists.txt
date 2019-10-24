cmake_minimum_required(VERSION 3.15)
project(Clion)

include_directories(include)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES
        daycalculate3.h
        jojochainfuckbill.h
        "8 to 10 to 8.h"
        grade.h
)
add_library(Clion ${SOURCE_FILES})

add_executable(main main.cpp)
add_executable(daycalculate3 daycalculate3.cpp)
add_executable(grade grade.cpp)
add_executable(jojochainfuckbill jojochainfuckbill.cpp)
add_executable(8to10to8 "8 to 10 to 8.cpp")