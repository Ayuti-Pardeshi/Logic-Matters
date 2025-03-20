#include <bits/stdc++.h>
using namespace std;

void sortRows(vector<vector<int>> &mat) {
  for (auto &row : mat)
    sort(row.begin(), row.end());
}

int main() {
  vector<vector<int>> mat = {
      {77, 11, 22, 3},
      {11, 89, 1, 12},
      {32, 11, 56, 7},
      {11, 22, 44, 33}};

  sortRows(mat);

  cout << "[\n";
  for (auto &row : mat) {
    cout << "  [";
    for (int j = 0; j < row.size(); j++) {
      if (j > 0) cout << ", ";
      cout << row[j];
    }
    cout << "]\n";
  }
  cout << "]\n";
}
