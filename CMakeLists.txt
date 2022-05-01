cmake_minimum_required(VERSION 3.20)
project(classes_and_inheritance)

set(CMAKE_CXX_STANDARD 14)

add_executable(classes_and_inheritance
        main.cpp
        Application.cpp Application.h
        part1/Bankomat.cpp part1/Bankomat.h
        part1/Money.cpp part1/Money.h
        ZeroDivideException.cpp ZeroDivideException.h
        part1/MinimalSumException.cpp part1/MinimalSumException.h
        part1/MaximumSumException.cpp part1/MaximumSumException.h
        part2/Decimal.cpp part2/Decimal.h
        part2/BitString.cpp part2/BitString.h
        part2/Array.cpp part2/Array.h
        part2/IncompatibleDimException.cpp part2/IncompatibleDimException.h
        part2/OutOfRangeException.cpp part2/OutOfRangeException.h)
