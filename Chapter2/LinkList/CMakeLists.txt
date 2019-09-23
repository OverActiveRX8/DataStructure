cmake_minimum_required(VERSION 3.15)
project(LinkList C)

set(CMAKE_C_STANDARD 99)

add_executable(LinkList main.c linkList.c linkList.h)