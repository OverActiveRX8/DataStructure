cmake_minimum_required(VERSION 3.15)
project(LinkList C)

set(CMAKE_C_STANDARD 99)

add_executable(LinkList linkList.h linkList.c main.c)