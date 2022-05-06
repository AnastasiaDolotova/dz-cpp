cmake_minimum_required(VERSION 3.20)
project(part2)

set(CMAKE_CXX_STANDARD 14)

add_executable(part2
        Decimal.cpp Decimal.h
        BitString.cpp BitString.h
        Array.cpp Array.h
        IncompatibleDimException.cpp IncompatibleDimException.h
        OutOfRangeException.cpp OutOfRangeException.h
        Application.cpp Application.h
        ZeroDivideException.cpp ZeroDivideException.h
        main.cpp)