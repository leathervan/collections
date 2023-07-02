cmake_minimum_required(VERSION 3.25)
set(CMAKE_C_COMPILER "/usr/bin/gcc")
project(collections)

set(CMAKE_CXX_STANDARD 17)

add_executable(collections main.cpp Vector.cpp Vector.h LinkedList.cpp LinkedList.h Sort.cpp Sort.h)
