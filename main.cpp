#include <iostream>
#include <fstream>
#include <ostream>
#include "Puzzle.h"
//#include "Sudoku.h"
#include "PuzzleFactory.h"
#include "SudokuFactory.h"
#include "Fitness.h"
#include "SudokuFitness.h"

using namespace std;

int main () {
   //Puzzle *test = new Sudoku();
   Sudoku *test = new Sudoku();
   PuzzleFactory *testFactory = new SudokuFactory();
   Fitness *testFitness = new SudokuFitness();
   // Cin works with this test string
   //123456789123456789123456789123456789123456789123456789123456789123456789123456789
   cin >> *test;
   cout << *test << endl;
   //cout << *testFactory->createPuzzle();
   //cout << *testFactory->createPuzzle();
   //cout << *testFactory->createPuzzle();
   //testFitness->howFit(*test);
   cout << testFitness->duplicateBlock(*test);

   return 0;
}