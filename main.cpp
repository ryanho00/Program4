#include <iostream>
#include <fstream>
#include <ostream>
#include "Puzzle.h"
#include "Sudoku.h"

using namespace std;

int main () {
    Sudoku test;

    //cout << test;
    string num = "123456789123456789123456789123456789123456789123456789123456789123456789123456789";
    test >> num;
    cout << test << endl;
    return 0;
}