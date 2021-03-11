#include "SudokuSquare.h"
#include "Puzzle.h"
#include <vector>

using namespace std;

class Sudoku: public Puzzle{
    public:
    Sudoku();
    Sudoku(Sudoku &copy);
    ~Sudoku();
    ostream& print(ostream& the_stream);
    istream& readPuzzle(istream& the_stream);
    void setArray(int val,bool fixed, int x, int y);
    SudokuSquare getArray(int x, int y);
    bool setFitness(int val);
    int getFitness();

    private:
    SudokuSquare** sdk;
    int fitness_value;
};