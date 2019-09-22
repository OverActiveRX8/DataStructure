# cmake_minimum_required(VERSION <specify CMake version here>)
project(Quick_Sort C)

set(CMAKE_C_STANDARD 99)

add_executable(Quick_Sort main.c quickSort.h quickSort.c)