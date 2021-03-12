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
    virtual ~Puzzle(){};

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

    bool operator<(const Puzzle* rhs)
    {
       return lessThan(rhs);
    }

    bool operator>(const Puzzle* rhs)
    {
       return greaterThan(rhs);
    }

    virtual int getFitness() const = 0;
    virtual bool setFitness(int val) =0;

    virtual bool lessThan(const Puzzle* rhs)const=0;
    virtual bool greaterThan(const Puzzle* rhs)const=0;
private:
    
    virtual ostream& print(ostream& the_stream) = 0;
    virtual istream& readPuzzle(istream& the_stream) = 0;
};

#endif