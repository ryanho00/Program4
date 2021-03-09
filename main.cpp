#include <iostream>
#include <fstream>
#include <ostream>
#include "Puzzle.h"
#include "Sudoku.h"
#include "PuzzleFactory.h"
#include "SudokuFactory.h"

using namespace std;

int main () {
   Puzzle *test = new Sudoku();
   PuzzleFactory *testFactory = new SudokuFactory();
   // Cin works with this test string
   //123456789123456789123456789123456789123456789123456789123456789123456789123456789
   cin >> *test;
   cout << *test << endl;
   cout << *testFactory->createPuzzle();
   return 0;
}