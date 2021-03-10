#include "Fitness.h"

using namespace std;

class SudokuFitness: public Fitness {
    public:
    SudokuFitness();
    ~SudokuFitness();  
    int howFit(Sudoku sdk);
    int duplicateRow(Sudoku sdk);
    int duplicateBlock(Sudoku sdk);
    int duplicateColumn(Sudoku sdk);

    private:
    int countEachBlock(Sudoku sdk, int start_x, int start_y, int end_x, int end_y);
};