#include "SudokuSquare.h"

SudokuSquare::SudokuSquare(){
    number = 0;
    is_fixed = false;
}

bool SudokuSquare::getFixed(){
    return is_fixed;
}

int SudokuSquare::getVal() const
{
    return number;
}

bool SudokuSquare::setFixed(bool fix){
    is_fixed = fix;
    return true;
}

bool SudokuSquare::setVal(int value)
{
    number = value;
    return true;
}
