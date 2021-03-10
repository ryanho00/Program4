#include "Fitness.h"
#include "Puzzle.h"

using namespace std;

class SudokuFitness: public Fitness {
    public:
    SudokuFitness();
    ~SudokuFitness();  
    int howFit(Puzzle* sdk);
    int duplicateRow(Sudoku* sdk);
    int duplicateBlock(Sudoku* sdk);
    int duplicateColumn(Sudoku* sdk);

    private:
    int countEachBlock(Sudoku* sdk, int start_x, int start_y, int end_x, int end_y);
};