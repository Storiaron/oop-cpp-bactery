cmake_minimum_required(VERSION 3.26)
project(oop_cpp_bactery)

set(CMAKE_CXX_STANDARD 17)

add_executable(oop_cpp_bactery main.cpp
        Simulator.cpp
        Simulator.h
        Logger.cpp
        Logger.h
        model/Cell.h
        model/Bacterium.h
        model/Bacterium.h)
