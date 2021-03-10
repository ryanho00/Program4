#ifndef _PZ_
#define _PZ_
#include <iostream>
#include <string>
#include <vector>
#include "SudokuSquare.h"

using namespace std;

class Puzzle {
   
public:
    Puzzle(){};
    ~Puzzle(){};

    friend ostream& operator<<(ostream & the_stream, Puzzle& rhs)
    {
       rhs.print(the_stream);
       return the_stream;
    }

    friend istream& operator>>(istream & the_stream, Puzzle& rhs)
    {
       rhs.readPuzzle(the_stream);
       return the_stream;
    }
private:
    
    virtual ostream& print(ostream& the_stream) = 0;
    virtual istream& readPuzzle(istream& the_stream) = 0;
};

#endif