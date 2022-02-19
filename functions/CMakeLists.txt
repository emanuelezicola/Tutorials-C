cmake_minimum_required(VERSION 3.21)
project(functions C)

set(CMAKE_C_STANDARD 99)

add_executable(functions main.c math/math.c math/math.h)
