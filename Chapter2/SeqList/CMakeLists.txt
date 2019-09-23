cmake_minimum_required(VERSION 3.15)
project(SeqList C)

set(CMAKE_C_STANDARD 99)

include_directories(/run/media/pjpalanas/DATA/School/DataStructure/Chapter2/SeqList/lib)

link_directories(/run/media/pjpalanas/DATA/School/DataStructure/Chapter2/SeqList/lib)

add_executable(SeqList main.c seqList.h seqList.c)