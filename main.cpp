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
   Puzzle *randomTest;
   PuzzleFactory *testFactory = new SudokuFactory();
   //Cin works with this test string
   //123456789123456789123456789123456789123456789123456789123456789123456789123456789
   cout << "Please give me the Sudoku you want to use" << endl;
   cin >> *test;
   cout << *test << endl;
   randomTest = testFactory->createPuzzle();
   cout << *randomTest;

   delete test;
   delete testFactory;
   delete randomTest;
   return 0;
}