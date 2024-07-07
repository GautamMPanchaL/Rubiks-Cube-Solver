cmake_minimum_required(VERSION 3.28)
project(Rubix)

set(CMAKE_CXX_STANDARD 17)

add_executable(Rubix main.cpp
        Model/RubiksCube.h
        Model/RubiksCube.cpp)
