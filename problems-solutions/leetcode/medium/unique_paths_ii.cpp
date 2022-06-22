#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

#define N 101
int grid[N][N] = {0};
int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
  grid[0][0] = 1;
  for (int i = 0; i < obstacleGrid.size(); i++) {
    for (int j = 0; j < obstacleGrid[i].size(); j++) {
      if (obstacleGrid[i][j] == 1) {
        grid[i][j] = 0;
      } else if (i == 0 || j == 0) {
        grid[i][j] = 1;
        if ((j > 0 && grid[i][j - 1] == 0) || (i > 0 && grid[i - 1][j] == 0)) {
          grid[i][j] = 0;
        }
      } else {
        grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
      }
    }
  }

  return grid[obstacleGrid.size() - 1][obstacleGrid[0].size() - 1];
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  int n, m;
  scanf("%d%d", &n, &m);
  vector<vector<int>> obstacleGrid(n, vector<int>(m));
  for (vector<int>& row : obstacleGrid) {
    for (const int& obstacle : row) {
      scanf("%d", &obstacle);
    }
  }

  printf("%d\n", uniquePathsWithObstacles(obstacleGrid));

  return 0;
}