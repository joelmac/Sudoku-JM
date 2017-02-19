#ifndef SUDOKU_GRID_H
#define SUDOKU_GRID_H
/*
SudokuCell.h file.  Defines struct for sudoku class
*/
#include <vector>
#include "Sudoku_cell.h"
#include "Cell_collection.h"
class Sudoku_grid {
public:
	Sudoku_grid();
	void input_value(int);
	void solve_one_step();
	void solve_grid();
	void print_grid();
	Sudoku_cell cells[9][9];
};
#endif
