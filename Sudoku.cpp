#include <iostream>
#include "Sudoku.h"

Sudoku::Sudoku(){
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            sdk[i][j].setVal(0);
        }
    }
}

ostream& operator<<(ostream & the_stream, const Puzzle& rhs){
    for(int i = 0; i < 9; i++){
        if(i % 4 == 0){
            the_stream << "+-------+-------+-------+" << endl;
        } else {
            the_stream << "| ";
        }

        for(int j = 0; j < 9; i++){
            the_stream << sdk[i][j];
            if(j % 3 == 0){
               the_stream << "| "; 
            }
        }

    }
    return the_stream;
}

istream& operator>>(istream & the_stream, const Puzzle& rhs){
    return the_stream;
}