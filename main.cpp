#include <iostream>
#include <fstream>
#include <ostream>
#include "Puzzle.h"
#include "Sudoku.h"

using namespace std;

int main () {
   Puzzle *test = new Sudoku();

   cout << *test;
   return 0;
}