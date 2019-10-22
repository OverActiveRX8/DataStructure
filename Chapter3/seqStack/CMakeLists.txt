cmake_minimum_required(VERSION 3.15)
project(seqStack C)

set(CMAKE_C_STANDARD 99)

add_executable(seqStack main.c seqStack.c seqStack.h)