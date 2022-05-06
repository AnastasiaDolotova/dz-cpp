cmake_minimum_required(VERSION 3.20)
project(classes_and_inheritance)

set(CMAKE_CXX_STANDARD 14)

add_executable(classes_and_inheritance
        main.cpp
        Application.cpp Application.h
        Bankomat.cpp Bankomat.h
        Money.cpp Money.h
        ZeroDivideException.cpp ZeroDivideException.h
        MinimalSumException.cpp MinimalSumException.h
        MaximumSumException.cpp MaximumSumException.h)