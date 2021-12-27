#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int max_path(vector<vector<int>> &grid, int &n, int &m, int i = 0, int j = 0) {
  // end
  if (i == n - 1 && j == m - 1) {
    return grid[i][j];
  }

  int q = 0, p = 0;
  // right
  if (i < n && j + 1 < m) {
    q = max_path(grid, n, m, i, j + 1);
  }

  // down
  if (i + 1 < n && j < m) {
    q = max_path(grid, n, m, i + 1, j);
  }

  return grid[i][j] + max(q, p);
}

int main() {
  IOS;
  // FIO;

  int n, m;
  scanf("%d%d", &n, &m);
  vector<vector<int>> a(n, vector<int>(m, 0));
  for (vector<int> &b : a) {
    for (int &bi : b) {
      scanf("%d", &bi);
    }
  }

  int maximum_gird_path = max_path(a, n, m);
  printf("%d\n", maximum_gird_path);

  return 0;
}