cmake_minimum_required(VERSION 3.21)
project(popular)

set(CMAKE_CXX_STANDARD 11)

add_executable(popular main.cpp arithmetic.h arithmetic.cpp console_utils.h console_utils.cpp)
