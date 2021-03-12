#include <iostream>
#include <fstream>
#include <ostream>
#include "GeneticAlgorithm.h"

using namespace std;

int main(int argc, char *argv[]) {
   int population_size = atoi(argv[1]);
   int max_generation = atoi(argv[2]);

   GeneticAlgorithm run(population_size, max_generation);
   run.process();
   // Population* testPopulation = new SudokuPopulation(population_size, max_generation);
   //Puzzle *test = new Sudoku();
   // PuzzleFactory *testFactory = new SudokuFactory();
   //Fitness *testFitness = new SudokuFitness();
   // SudokuOffSpring *testReproduction = new SudokuOffSpring();
   // // Cin works with this test string
   // //123456789123456789123456789123456789123456789123456789123456789123456789123456789
    //cout << "Please give me a line for the Sudoku!" << endl;
    //cin >> *test;
   // cout << *test << endl;
   // //cout << *testFactory->createPuzzle();
   // //cout << *testFactory->createPuzzle();
   // //cout << *testFactory->createPuzzle();
    //testFitness->howFit(test);
    //cout << testFitness->howFit(test) << endl;

   // // TODO #RYAN: HELP ME DEBUG LINE32
   // // I can't cout << sudoku object (makeOffSpring returns sudoku)
   // cout << *testReproduction->makeOffSpring(test) << endl;


   // delete test;
   // delete testFactory;
   // delete testFitness;
   // delete testReproduction;
   //827154396965327148341689752593468271472513689618972435786235914154796823239841567
   //123050709020456709123050709123456789123456789123456789123456789123456789123456789
   //000000000000000000000000000000000000000000000000000000000000000000000000000000000
   //120650000938010004400089010004500089000000000290001300070140008500060427000028065

/*
   PuzzleFactory *aFactory = new SudokuFactory();
   Fitness *checkFitness = new SudokuFitness();
   Puzzle *sdk1 = new Sudoku();
   cin >> *sdk1;
   Puzzle *sdk2 = aFactory->createPuzzle(sdk1);

   sdk1->setFitness(checkFitness->howFit(sdk1));
   sdk2->setFitness(checkFitness->howFit(sdk2));

   cout << *sdk1 << endl;
   cout << *sdk2 << endl;

   cout << "fitness of sdk1: " << sdk1->getFitness() << endl;
   cout << "fitness of sdk2: " << sdk2->getFitness() << endl;
   cout << "SDK1 > SDK2 : " << (sdk1 > sdk2) << endl;
   cout << "SDK1 < SDK2 : " << (sdk1 < sdk2) << endl;
*/

   return 0;
}