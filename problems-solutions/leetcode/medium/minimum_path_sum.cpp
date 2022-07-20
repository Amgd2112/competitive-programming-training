#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int minPathSum(vector<vector<int>>& grid) {
  int n = grid.size(), m = grid[0].size();
  for (int i = 0; i < grid.size(); i++) {
    for (int j = 0; j < grid[i].size(); j++) {
      if (i == 0 && j == 0) continue;
      if (i == 0) {
        grid[i][j] += gird[i][j - 1];
      } else if (j == 0) {
        grid[i][j] += gird[i - 1][j];
      } else {
        grid[i][j] += min(grid[i][j - 1], grid[i - 1][j]);
      }
    }
  }

  return grid[n - 1][m - 1];
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  int n, m;
  scanf("%d%d", &n, &m);
  vector<vector<int>> grid(n, vector<int>(m));
  for (vector<int>& row : grid) {
    for (const int& cell : row) {
      scanf("%d", &cell);
    }
  }

  printf("%d\n", minPathSum(grid));

  return 0;
}