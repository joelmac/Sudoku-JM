#ifndef CELL_COLLECTION_H
#define CELL_COLLECTION_H
/*
SudokuCell.h file.  Defines struct for sudoku class
*/
#include <vector>
#include "Sudoku_cell.h"
using std::vector;
class Cell_collection {
public:
	Cell_collection(vector<Sudoku_cell>&);
	~Cell_collection();
	void solve_single();
	vector<Sudoku_cell> &cells;
};
#endif
