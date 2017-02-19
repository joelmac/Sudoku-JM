#include "Sudoku_cell.h"
#include "Cell_collection.h"
#include <iostream>
#include <vector>
using namespace std;
using std::vector;
int main(){
  cout << "test" << endl;
  Sudoku_cell T;
  T.set_value(3);
  cout << T.get_value();
  Sudoku_cell R;
  R.set_value(8);
  vector<Sudoku_cell> v;
  v.push_back(T);
  v.push_back(R);
  Cell_collection S(v);
  for(int i=0; i<S.size();i++){
    cout << S[i].get_value();
  }
  return 0;
}
