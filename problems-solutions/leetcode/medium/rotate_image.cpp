#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

void rotateCell(vector<vector<int>> &matrix, int i, int j) {
  int q = i, p = j;
  int cell = matrix[q][p];
  do {
    swap(q, p);
    p = matrix.size() - p - 1;
    swap(cell, matrix[q][p]);
  } while (!(i == q && j == p));
}

void rotate(vector<vector<int>> &matrix) {
  for (int i = 0; i * 2 <= matrix.size(); i++) {
    for (int j = i; j < matrix.size() - i - 1; j++) {
      rotateCell(matrix, i, j);
    }
  }
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  vector<vector<int>> matrix(n, vector<int>(n));
  for (const vector<int> &row : matrix) {
    for (const int &col : row) {
      scanf("%d", &col);
    }
  }

  rotate(matrix);
  for (const vector<int> &row : matrix) {
    for (const int &col : row) {
      printf("%d ", col);
    }
    printf("\n");
  }

  return 0;
}