#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

void setZeroes(vector<vector<int>>& matrix) {
  unordered_set<int> x, y;
  for (int i = 0; i < matrix.size(); i++) {
    for (int j = 0; j < matrix[i].size(); j++) {
      if (matrix[i][j] == 0) {
        x.insert(i);
        y.insert(j);
      }
    }
  }

  for (int i = 0; i < matrix.size(); i++) {
    for (int j = 0; j < matrix[i].size(); j++) {
      if (x.find(i]) != x.end() || y.find(j) != y.end()) {
        matrix[i][j] = 0;
      }
    }
  }

  return;
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  int n, m;
  scanf("%d%d", &n, &m);
  vector<vector<int>> matrix(n, vector<int>(m));
  for (vector<int>& row : matrix) {
    for (const int& cell : matrix) {
      scanf("%d", &cell);
    }
  }

  setZeroes(matrix);

  for (vector<int>& row : matrix) {
    for (const int& cell : matrix) {
      printf("%d ", cell);
    }
    printf("\n");
  }

  return 0;
}