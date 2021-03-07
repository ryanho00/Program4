#ifndef _PZ_
#define _PZ_
#include <iostream>
#include <string>
#include <vector>
#include "SudokuSquare.h"

using namespace std;

class Puzzle {
    friend ostream& operator<<(ostream & the_stream, const Puzzle& rhs){
        //todo
        return the_stream;
    }

    friend ostream& operator>>(ostream & the_stream, const Puzzle& rhs){
        //todo
        return the_stream;
    }

public:

    Puzzle();
    bool setFitness(int value);
    int getFitness();

private:
    vector<vector<SudokuSquare>> sdk;     
    int fitness_value;
};

#endif