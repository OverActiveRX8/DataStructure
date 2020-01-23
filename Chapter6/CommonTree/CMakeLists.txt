cmake_minimum_required(VERSION 3.15)
project(CommonTree C)

set(CMAKE_C_STANDARD 99)

add_executable(CommonTree main.c CommonTree.c CommonTree.h)