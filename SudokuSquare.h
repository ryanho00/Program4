#ifndef _SQ_
#define _SQ_
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class SudokuSquare {

public:

    SudokuSquare();
    ~SudokuSquare();
    int getVal();
    bool getFixed();
    bool setVal(int value);
    bool setFixed(bool value);

private:
    int number;
    bool is_fixed;
};

#endif