#include "SudokuOffSpring.h"
#include <random>

SudokuOffSpring::SudokuOffSpring(){
    mutation_rate = 0.05;
}

Sudoku* SudokuOffSpring::makeOffSpring(Sudoku sdk){
    
    // create new sudoku
    Sudoku *new_sdk = new Sudoku();

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            //get temp sdk_square from mutation
            SudokuSquare temp = mutate(sdk.getArray(i,j));

            // set temp sdk_square to the new sudoku object
            new_sdk->setArray(temp.getVal(),i,j);
        }
    }
    //Because you made a pointer to represent Sudoku, Sudoku object technically doesn't exist
    //As a result, you need to return the pointer that contains Sudoku, not the mem location
    return new_sdk;
}

SudokuSquare SudokuOffSpring::mutate(SudokuSquare square)
{
    // if not fixed value
    if(!(square.getFixed())){
        // roll a chance/probability of mutation
        uniform_real_distribution<double> uniform_chance(0.0,1.0);
        
        // if random chance falls under mutation rate
        if(uniform_chance(generator) < mutation_rate){
            // roll a random number (1,9)
            uniform_int_distribution<int> uniform_num(1,9);

            // set square to random number
            square.setVal(uniform_num(generator));
        }
    }
    return square;
}