cmake_minimum_required(VERSION 3.20)
project(logger)

set(CMAKE_CXX_STANDARD 17)

add_executable(logger main.cpp logger.cpp timer.cpp)
