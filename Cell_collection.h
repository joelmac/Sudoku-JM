#ifndef CELL_COLLECTION_H
#define CELL_COLLECTION_H
/*
SudokuCell.h file.  Defines struct for sudoku class
*/
#include <vector>

class Cell_collection {
public:
	Cell_collection(std::vector<Sudoku_cell>);
	void solve_single();
	std::vector<Sudoku_cell> cells[];
};
#endif
