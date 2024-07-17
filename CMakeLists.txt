cmake_minimum_required(VERSION 3.28)
project(Rubix)

set(CMAKE_CXX_STANDARD 17)

add_executable(Rubix main.cpp
        Model/RubiksCube.h
        Model/RubiksCube.cpp
        Model/RubiksCube3dArray.cpp
        Model/RubiksCube1dArray.cpp
        Model/RubiksCubeBitboard.cpp
        Solver/DFSSolver.h
        Solver/BFSSolver.h
        Solver/IDDFSSolver.h
        Solver/IDAstarSolver.h
        PatternDatabases/NibbleArray.h
        PatternDatabases/NibbleArray.cpp
        PatternDatabases/PatternDatabase.h
        PatternDatabases/PatternDatabase.cpp
        PatternDatabases/math.h
        PatternDatabases/math.cpp
        PatternDatabases/PermutationIndexer.h
        PatternDatabases/CornerPatternDatabase.h
        PatternDatabases/CornerPatternDatabase.cpp
        PatternDatabases/CornerDBMaker.h
        PatternDatabases/CornerDBMaker.cpp
)
