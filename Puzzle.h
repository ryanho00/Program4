#ifndef _PZ_
#define _PZ_
#include <iostream>
#include <string>
#include <vector>
#include "SudokuSquare.h"

using namespace std;

class Puzzle {
   
public:
    Puzzle();
    virtual friend ostream& operator<<(ostream & the_stream, const Puzzle& rhs) = 0;

    virtual friend ostream& operator>>(ostream & the_stream, const Puzzle& rhs) = 0;

private:
    
};

#endif