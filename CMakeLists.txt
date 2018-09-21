cmake_minimum_required(VERSION 3.12)
project(DataStructures)

set(CMAKE_CXX_STANDARD 14)

add_executable(DataStructures main.cpp Search/SecuencialSearch.cpp Search/SecuencialSearch.h Search/BinarySearch.cpp Search/BinarySearch.h Sort/InsertionSort.h Sort/QuickSort.h Sort/Bubble.h Sort/Swap.h Sort/Print.h Sort/Partition.h)