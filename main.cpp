#include "Sudoku_cell.h"
#include "Cell_collection.h"
#include <iostream>
#include <vector>
using namespace std;
using std::vector;
int main(){
  Sudoku_cell T;
  T.set_value(3);
  Sudoku_cell R;
  R.set_value(8);
  vector<Sudoku_cell> v;
  v.push_back(T);
  v.push_back(R);
  Cell_collection S(v);
  for(int i=0; i<S.len();i++){
	cout << S.cells[i].get_value();
	cout << endl;
  }
  Sudoku_grid K;
  K.set_value(1,1,8);
  K.set_value(3,3,9);
  K.print_grid();
  return 0;
}
