//
// Created by gautam panchal on 07-07-2024.
//

#ifndef RUBIXCUBE_H
#define RUBIXCUBE_H


#include "bits/stdc++.h"

using namespace  std;
/*
 * A generic rubiks cube class for modeling a generic representation
 * of rubix cube
 */



class RubiksCube {
public:
    enum  class FACE {
        UP,
        LEFT,
        FRONT,
        RIGHT,
        BACK,
        DOWN,
    };

    enum class COLOR {
        WHITE,
        GREEN,
        RED,
        BLUE,
        ORANGE,
        YELLOW
    };

    enum class MOVE {
        L, LPRIME, L2,
        R, RPRIME, R2,
        U, UPRIME, U2,
        D, DPRIME, D2,
        F, FPRIME, F2,
        B, BPRIME, B2
    };


    /*  Return the color of (row, col) cell in the face
     * 6   7   8
     * 3   4   5
     * 0   1   2
     * representation of a face of a cube
     */
    virtual COLOR getColor(FACE face, unsigned row, unsigned col) const = 0;

    /*
     *  Returns the FIRST LETTER OF A GIVEN COLOR
     *  RED = 'R', GREEN = 'G'
     */
    static  char getColorLEtter(COLOR color);
    /*
     *  RETURNS TRUE IF CURRENT CONFIGRATION IS SOLVABLE
     *  FALSE IF NOT
     */
    virtual bool isSolved() const =0;

    /*
     * RETURN THE MOVES IN STRING FORMATE
     */
    static string getMove(MOVE ind);

    /*
     * PRINT THE RUBIX CUBE IN PLANAR REPRESENTATION FORM
     *
     * THE SIDES:
     *   U
     * L F R B
     *   D
     *
     * COLOR WISE:
     *
     *          W W W
     *          W W W
     *          W W W
     *
     *  G G G   R R R   B B B   O O O
     *  G G G   R R R   B B B   O O O
     *  G G G   R R R   B B B   O O O
     *
     *          Y Y Y
     *          Y Y Y
     *          Y Y Y
     *
     *  ROW AND COLUMN NUMBERING:
     *  RX-> ROW NUMBERING
     *  CX->COLUMN NUMBERING
     *  BX-> BOTH ROW AND COLUMN NUMBERING
     *
     *
     */













    void print() const;
    /*
     * RANDOMLY SHUFFLES THE CUBES WITH time AS A PARAMETER
     */

    vector<MOVE> randomShuffleCube(unsigned int times);

 /*
  * RETURN THE MOVES PERFORMED FOR SHUFFLING THE CUBES
  */
    RubiksCube &move(MOVE ind);

 /*
  * INVERT A MOVE
  */
    RubiksCube &invert(MOVE ind);

 /*
      * Rotational Moves on the Rubik Cubes
      *
      * F, F’, F2,
      * U, U’, U2,
      * L, L’, L2,
      * D, D’, D2,
      * R, R’, R2,
      * B, B’, B2
      */

    virtual RubiksCube &f() = 0;

    virtual RubiksCube &fPrime() = 0;

    virtual RubiksCube &f2() = 0;

    virtual RubiksCube &u() = 0;

    virtual RubiksCube &uPrime() = 0;

    virtual RubiksCube &u2() = 0;

    virtual RubiksCube &l() = 0;

    virtual RubiksCube &lPrime() = 0;

    virtual RubiksCube &l2() = 0;

    virtual RubiksCube &r() = 0;

    virtual RubiksCube &d() = 0;

    virtual RubiksCube &dPrime() = 0;

    virtual RubiksCube &d2() = 0;

    virtual RubiksCube &rPrime() = 0;

    virtual RubiksCube &r2() = 0;

    virtual RubiksCube &b() = 0;

    virtual RubiksCube &bPrime() = 0;

    virtual RubiksCube &b2() = 0;

    string getCornerColorString(uint8_t ind) const;

    uint8_t getCornerIndex(uint8_t ind) const;

    uint8_t getCornerOrientation(uint8_t ind) const;
};


#endif //RUBIXCUBE_H