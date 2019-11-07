cmake_minimum_required(VERSION 3.15)
project(Clion)

include_directories(include)

set(CMAKE_CXX_STANDARD 17)


add_executable(main main.cpp)
add_executable(16to10test 16to10test.cpp new.cpp new.h test.cpp test.h)
add_executable(grade grade.cpp)
add_executable(jojochainfuckbill jojochainfuckbill.cpp)
add_executable(8to10to8 "8 to 10 to 8.cpp")
add_executable(sinx "泰勒展开sinx.cpp")
add_executable(duck duck.cpp)
add_executable(new new.cpp)
add_executable(test test.cpp)
