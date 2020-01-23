cmake_minimum_required(VERSION 3.15)
project(BinaryTreeInCpp)

set(CMAKE_CXX_STANDARD 11)

set(HEADER_FILES SearchTree.h)

set(SOURCE_FILES main.cpp)

add_executable(BinaryTreeInCpp ${SOURCE_FILES} ${HEADER_FILES})
