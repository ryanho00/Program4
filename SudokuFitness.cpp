#include "SudokuFitness.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

SudokuFitness::SudokuFitness(){

}

SudokuFitness::~SudokuFitness(){

}

int SudokuFitness::duplicateBlock(Sudoku sdk){
    int duplicate = 0;
    for(int i = 0; i < 9; i+=3){
        for(int j = 0; j < 9; j+=3){
            cout << "Test count each block: " << countEachBlock(sdk,i,j,i+2,j+2) << endl;
            duplicate += countEachBlock(sdk,i,j,i+2,j+2);
            //cout << "[" << i << ", " << j << "] -> " << "[" << i+2 << ", " << j+2 << endl;
        }
    }
    return duplicate;
}

int SudokuFitness::countEachBlock(Sudoku sdk, int start_x, int start_y, int end_x, int end_y){
    vector<int> temp;
    int duplicate = 0;
    int start_y_temp = start_y;
    // first row of block
    for(int i = 0; i < 3; i++){
        temp.push_back(sdk.getArray(start_x,start_y_temp).getVal());

        // increment to go from left to right
        start_y_temp++;
    }

    // increment and rest var to start second row of block
    start_y_temp = start_y;
    start_x++;
    for(int i = 0; i < 3; i++){
        temp.push_back(sdk.getArray(start_x,start_y_temp).getVal());
        // increment to go from left to right
        start_y_temp++;
    }

    start_y_temp = start_y;
    start_x++;
    for(int i = 0; i < 3; i++){
        temp.push_back(sdk.getArray(start_x,start_y_temp).getVal());

        // increment to go from left to right
        start_y_temp++;
    }

    for(int i = 0; i < temp.size();i++){
        for(int j = i + 1; j < temp.size(); j++){
            if(temp[i] == temp[j]){
                duplicate++;
            }
        }
    }

    temp.clear();

    return duplicate;
}

int SudokuFitness::duplicateRow(Sudoku sdk){
    int duplicate = 0;

    // i loop to scan down column 
    for(int i = 0; i < 9; i++){
        
        // j loop to scan through row
        for(int j = 0; j < 9; j++){

            // k loop to compare elements
            for(int k = j + 1; k < 9; k++){
                if(sdk.getArray(i,j).getVal() == sdk.getArray(i,k).getVal()){
                    duplicate++;
                }
            }
        }
    }
    temp.clear();
    return duplicate;
}

int SudokuFitness::duplicateColumn(Sudoku sdk){
    int duplicate = 0;

    // i loop to scan through row
    for(int i = 0; i < 9; i++){
        
        // j loop to scan down column
        for(int j = 0; j < 9; j++){

            // k loop to compare elements
            for(int k = j + 1; k < 9; k++){
                if(sdk.getArray(j,i).getVal() == sdk.getArray(k,i).getVal()){
                    duplicate++;
                }
            }
        }
    }
    return duplicate;
}

int SudokuFitness::howFit(Sudoku sdk){
    cout << "Column: " << duplicateColumn(sdk) << endl;
    cout << "Row: " << duplicateRow(sdk) << endl;
    cout << "Blocks: " << duplicateBlock(sdk) << endl;
    return duplicateBlock(sdk) + duplicateColumn(sdk) + duplicateRow(sdk);
}