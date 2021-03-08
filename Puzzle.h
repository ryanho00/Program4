#ifndef _PZ_
#define _PZ_
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Puzzle {
   
public:
    friend ostream& operator<<(ostream & the_stream, const Puzzle& rhs);

    friend ostream& operator>>(ostream & the_stream, const Puzzle& rhs);

private:
    
};

#endif