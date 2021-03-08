#ifndef _PZ_
#define _PZ_
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Puzzle {
   
public:
    friend ostream& operator<<(ostream & the_stream, const Puzzle& rhs)
    {
       rhs.print(the_stream);
       return the_stream;
    }

    friend istream& operator>>(istream & the_stream, const Puzzle& lhs)
    {
       lhs.readPuzzle(the_stream);
       return the_stream;
    }

private:
    virtual ostream& print(ostream& the_stream) const = 0;
    virtual istream& readPuzzle(istream& the_stream) const = 0;
};

#endif