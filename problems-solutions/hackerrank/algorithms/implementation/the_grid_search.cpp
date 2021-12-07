#include <bits/stdc++.h>
using namespace std;

unordered_map<bool, string> OUTPUT = {{false, "NO"}, {true, "YES"}};

bool is_found(string grid[], string pattern[], int r, int c, int current_row,
              int current_col) {
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      if (grid[current_row + i][current_col + j] != pattern[i][j]) return false;
    }
  }

  return true;
}

bool search(string grid[], string pattern[], int R, int C, int r, int c) {
  for (int i = 0; i <= R - r; i++) {
    for (int j = 0; j <= C - c; j++) {
      if (is_found(grid, pattern, r, c, i, j)) return true;
    }
  }

  return false;
}

int main() {
  int test_cases;
  scanf("%d\n", &test_cases);
  while (test_cases--) {
    int R, C;
    scanf("%d %d\n", &R, &C);
    string grid[R];
    for (string &row : grid) getline(cin, row);

    int r, c;
    scanf("%d %d\n", &r, &c);
    string pattern[r];
    for (string &row : pattern) getline(cin, row);
    cout << OUTPUT[search(grid, pattern, R, C, r, c)] << endl;
  }

  return 0;
}