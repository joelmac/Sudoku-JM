#ifndef SUDOKU_GRID_H
#define SUDOKU_GRID_H
/*
SudokuCell.h file.  Defines struct for sudoku class
*/
#include <vector>
#include <iostream>
#include <string>
#include "Sudoku_cell.h"
#include "Cell_collection.h"
using namespace std;
class Sudoku_grid {
public:
	Sudoku_grid();
	void input_value(int);
	void solve_one_step();
	void solve_grid();
	void print_grid();
	void print_row(int);
	void print_line();
	void print_spacer();
	void set_value(int,int,int);
	void value_by_input_string(string);
	Sudoku_cell cells[9][9];
};
#endif
