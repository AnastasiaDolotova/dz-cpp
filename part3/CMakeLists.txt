cmake_minimum_required(VERSION 3.20)
project(part3)

set(CMAKE_CXX_STANDARD 14)

add_executable(part3
        Triangle.h Triangle.cpp
        RightTriangle.cpp RightTriangle.h
        IsoscelesTriangle.cpp IsoscelesTriangle.h
        EquilateralTriangle.cpp EquilateralTriangle.h)
