#include <iostream>

#include "Model/RubiksCube.h"
#include <bits/stdc++.h>
#include "Model/RubiksCube3dArray.cpp"
#include "Model/RubiksCube1dArray.cpp"
// #include "Model/RubiksCubeBitboard.cpp"
#include "Solver/DFSSolver.h"
#include "Solver/BFSSolver.h"
#include "Solver/IDDFSSolver.h"
#include "Solver/IDAstarSolver.h"
#include "PatternDatabases/CornerPatternDatabase.h"
#include "PatternDatabases/CornerDBMaker.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    RubiksCube3dArray object3DArray;
    object3DArray.d();
    object3DArray.print();
    cout<<object3DArray.isSolved()<<endl;
    return 0;



}
