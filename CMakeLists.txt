cmake_minimum_required(VERSION 3.26)
project(oop_cpp_bactery)

set(CMAKE_CXX_STANDARD 17)

add_executable(oop_cpp_bactery main.cpp
        Simulator.cpp
        Simulator.h
        Logger.cpp
        Logger.h
        model/Bacillus.cpp
        model/Bacillus.h
        model/Coccus.cpp
        model/Coccus.h
        model/Spirillum.cpp
        model/Spirillum.h
        model/Cell.cpp
        model/Cell.h
        model/Bacterium.cpp
        model/Bacterium.h)
