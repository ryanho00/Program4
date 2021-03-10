#include <iostream>
#include <fstream>
#include <ostream>
#include <vector>
#include "Puzzle.h"
//#include "Sudoku.h"
#include "PuzzleFactory.h"
#include "SudokuFactory.h"
#include "Fitness.h"
#include "SudokuFitness.h"
#include "Reproduction.h"
#include "SudokuOffSpring.h"
#include "Population.h"
#include "SudokuPopulation.h"

using namespace std;

int main(int argc, char *argv[]) {
   int population_size = atoi(argv[1]);
   int max_generation = atoi(argv[2]);

   //Population* testPopulation = new SudokuPopulation(population_size, max_generation);
   Puzzle *test = new Sudoku();
   PuzzleFactory *testFactory = new SudokuFactory();
   Fitness *testFitness = new SudokuFitness();
   SudokuOffSpring *testReproduction = new SudokuOffSpring();
   vector<Puzzle*> createdSDK;
   // Cin works with this test string
   //123456789123456789123456789123456789123456789123456789123456789123456789123456789
   cout << "Please give me a line for the Sudoku!" << endl;
   cin >> *test;
   cout << *test << endl;

   createdSDK.push_back(testFactory->createPuzzle());
   createdSDK.push_back(testFactory->createPuzzle());
   createdSDK.push_back(testFactory->createPuzzle());
   for(int i = 0; i < createdSDK.size(); i++)
   {
      cout << *createdSDK.at(i) << endl;
      delete createdSDK[i];
   }
   createdSDK.clear();

   //testFitness->howFit(*test);
   cout << testFitness->howFit(test) << endl;

   // TODO #RYAN: HELP ME DEBUG LINE32
   // I can't cout << sudoku object (makeOffSpring returns sudoku)
   cout << *testReproduction->makeOffSpring(test) << endl;


   delete test;
   delete testFactory;
   delete testFitness;
   delete testReproduction;
   //827154396965327148341689752593468271472513689618972435786235914154796823239841567
   //123050709020456709123050709123456789123456789123456789123456789123456789123456789
   //000000000000000000000000000000000000000000000000000000000000000000000000000000000

   return 0;
}