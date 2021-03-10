#include "SudokuSquare.h"
#include "Puzzle.h"
#include <vector>

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
    SudokuSquare** sdk;
    int fitness_value;
};