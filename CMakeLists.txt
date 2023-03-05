cmake_minimum_required(VERSION 3.24)
project(mirea_practice)

set(CMAKE_CXX_STANDARD 14)

include_directories(2/1)
include_directories(2/2)

add_executable(mirea_practice_1_1
        2/1/main.cpp
        2/1/triangle.cpp
        2/1/triangle.h
        )
add_executable(mirea_practice_1_2
        2/2/main.cpp
        2/2/circle.cpp
        2/2/circle.h
        )
add_executable(mirea_practice_1_3
        2/3/figure.cpp
        2/3/figure.h
        2/3/main.cpp
        )
