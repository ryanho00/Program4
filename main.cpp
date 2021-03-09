#include <iostream>
#include <fstream>
#include <ostream>
#include "Puzzle.h"
#include "Sudoku.h"

using namespace std;

int main () {
   Puzzle *test = new Sudoku();
   // Cin works with this test string
   //123456789123456789123456789123456789123456789123456789123456789123456789123456789
   cin >> *test;
   cout << *test;
   return 0;
}