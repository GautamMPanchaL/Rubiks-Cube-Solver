# Rubik's Cube Solver

## Project Overview
I worked on a Rubik’s Cube Solver, where the goal was to determine the minimum number of steps required to solve a jumbled Rubik's Cube using advanced algorithms and heuristic techniques.

### Agenda
Finding out the minimum number of steps to solve a jumbled Rubik's Cube.

## Moves Notation
- **U**: Clockwise rotation to the upper face.
- **U'**: Anticlockwise rotation to the upper face.
- **U2**: Two times clockwise rotation (U2 == U2' as they come to the same state).

### General Moves
- **F, L, R, U, B, D**: 6 basic moves
- 6 + 6 + 6 = 18 general operations. Using these operations, we can solve the Rubik's Cube under 20 moves (fact).

### Cube Representation
- **26 mini cubies**

### Tasks
1. **Representation/Modeling of Rubik's Cube**: 3D and 1D bitwise.
2. **Implementation of 18 basic operations**.
3. **Print the cube state**.
4. We are solving only valid permutations of the Rubik's Cube for simplicity.

### 3D Matrix
- 3x3x6 for the 6 faces, each with its own rows and columns.

### Class Structure
- Abstract class for the Rubik's Cube with different implementations for various models (3D representation, 1D representation).
- Solvers work on the abstract class objects, making them compatible with different models.

## Algorithms
1. **DFS and BFS Solver**: Initial approach, but BFS used more memory, and DFS faced caveats.
2. **IDA* Korf's Algorithm**: Combines A* with IDDFS and uses pattern databases as a heuristic.

### Heuristic
Heuristic is an estimate of how far a particular node is from the goal node. It can be the exact distance or an underestimate. A* uses this estimate to find the optimal path from the source node to the goal node.

### Pattern Databases
Pattern databases store the number of moves required to reach the solved state of the Rubik's Cube.
1. **Corner Pattern Database**: Number of moves to solve the corners, assuming the rest are solved.
2. **Edge Pattern Database**: Number of moves to solve the edges, considering two separate databases for 6 edges each.

### IDA* Solver
The centerpiece of this project, the IDA* solver using Korf’s Algorithm, aims to solve the Rubik's Cube in an optimal number of moves using a heuristic and pattern databases.

### Implementation Steps
1. **Modeling the Rubik’s Cube**: 3D representation.
2. **Algorithm Implementation**: DFS, BFS, IDDFS, and IDA* Korf's Algorithm.
3. **Heuristic Development**: Created heuristic functions to estimate moves.
4. **Pattern Databases**: Developed for corners to use as heuristics in IDA*.

## Problems Faced
- **Representation**: Choosing between 1D and 3D representations.
- **DFS Solver Caveat**: Handling revisits of nodes to ensure the solution is found.
- **IDA* Heuristic**: Implementing and storing heuristic functions.

## Outcome
Successfully solved the Rubik's Cube in less than 4 moves using the implemented algorithms.

## Future Work
- Implement the edge pattern database for more efficient solving.
- Optimize memory usage in the solvers.

## References
Korf, Richard E. ["Finding Optimal Solutions to Rubik's Cube Using Pattern Databases."](http://citeseerx.ist.psu.edu/viewdoc/summary?doi=10.1.1.56.3725)
