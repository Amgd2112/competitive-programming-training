#include <bits/stdc++.h>
using namespace std;

bool is_cavity(vector<string> grid, int i, int j) {
  int dir1[] = {-1, 1, 0, 0};
  int dir2[] = {0, 0, 1, -1};
  for (int k = 0; k < 4; k++) {
    if (grid[i][j] <= grid[i + dir1[k]][j + dir2[k]]) return false;
  }
  return true;
}

vector<string> cavity_map(vector<string> grid, int n) {
  if (n < 3) return grid;
  for (int i = 1; i < n - 1; i++) {
    for (int j = 1; j < n - 1; j++) {
      if (is_cavity(grid, i, j)) grid[i].replace(j, 1, "X");
    }
  }
  return grid;
}

int main() {
  int n;
  scanf("%d\n", &n);
  vector<string> grid(n);
  for (string &line : grid) getline(cin, line);
  for (string line : cavity_map(grid, n)) printf("%s\n", line.c_str());

  return 0;
}
