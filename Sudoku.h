#include "SudokuSquare.h"
#include "Puzzle.h"

using namespace std;

class Sudoku: public Puzzle{
    public:
    Sudoku();
    ~Sudoku();
    ostream& print(ostream& the_stream);
    istream& readPuzzle(istream& the_stream);
    void setArray(int val, int x, int y);
    SudokuSquare getArray(int x, int y);

    private:
    SudokuSquare sdk[9][9];
    int fitness_value;
};