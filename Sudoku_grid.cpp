
/*
SudokuCell.h file.  Defines struct for sudoku class
*/
#include <iostream>
#include "Sudoku_grid.h"
using namespace std;

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
	int v;
	print_line();
	for(int i=0;i<9;i++){
		print_spacer();
		print_row(i);
		print_spacer();
		print_line();
		if(i%3==2){
			print_line();
		}
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

void Sudoku_grid::print_line(){
	string line(76,'_');
	cout <<" " << line << endl;
	return;
}

void Sudoku_grid::print_spacer(){
	string space(7,' ');
	string divider="|" + space;
	cout << "|";
	for(int i=0;i<9;i++){
		cout << divider;
		if(i%3==2){
			cout << "|";
		}
	}
	cout << "|";
	cout << endl;
	return;
}


void Sudoku_grid::print_row(int row){
	string space(3,' ');
	cout << "|";
	for(int j=0;j<9;j++){
		string value;
		int v = cells[row][j].get_value();
		if(v==0){
			value="-";
		}
		else{
			value= to_string(v);
		}
		string cell_string="|" + space + value + space;
		cout << cell_string;
		if(j%3==2){
			cout << "|";
		} 
	}
	cout << "|";
	cout << endl;
	return;
}

void Sudoku_grid::value_by_input_string(string inp){
	int v= stoi(inp);
	int top_left_row, top_left_col,cell_add_row,cell_add_col;
	int box_no = v/100;
	int cell_no = (v-box_no*100)/10;
	int value = (v - box_no*100 - cell_no*10);
	top_left_row = 3*((box_no-1)/3);
	top_left_col = 3*((box_no-1)%3);
	cell_add_row = ((cell_no-1)/3);
	cell_add_col = ((cell_no-1)%3);
	int row = top_left_row + cell_add_row;
	int col = top_left_col + cell_add_col;
	cells[row][col].set_value(value);
}
