cmake_minimum_required(VERSION 3.24)
project(mirea_practice)

set(CMAKE_CXX_STANDARD 14)

include_directories(1/1)
include_directories(1/2)

add_executable(mirea_practice_1_1
        1/1/main.cpp
        1/1/triangle.cpp
        1/1/triangle.h
        )
add_executable(mirea_practice_1_2
        1/2/main.cpp
        1/2/circle.cpp
        1/2/circle.h
        )
add_executable(mirea_practice_1_3
        1/3/figure.cpp
        1/3/figure.h
        1/3/main.cpp
        )
