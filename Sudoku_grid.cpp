
/*
SudokuCell.h file.  Defines struct for sudoku class
*/
#include <iostream>
#include "Sudoku_grid.h"
usind namespace std;

Sudoku_grid::Sudoku_grid(){
	for(int j=0;j<9;j++){
		for(int i=0;i<9;i++){
			Sudoku_cell T;
			cells[i][j] = T;
		}
	}
}

//solves the first cell it can find using inference rules
void Sudoku_grid::solve_one_step(){
	return;
}

//changes the value of cell [i][j]
void Sudoku_grid::input_value(int){
	return;
}

//print the grid in sudoku format
void Sudoku_grid::print_grid(){
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			v = cells[i][j].get_value()
			if(v==0){
				cout << "-";
			}
			else{
				cout << v;
			}
		}
		cout << endl;
	}
	return;
}

//solves the grid until all cells are solved or until infeasible.
void Sudoku_grid::solve_grid(){
	return;
}

void Sudoku_grid::set_value(int row, int col, int value){
	cells[row][col].set_value(value);
	return;
}
