#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                        \
  freopen("grid.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int main(int argc, char const *argv[]) {
  IOS;
  FIO;

  int n, m;
  scanf("%d %d", &n, &m);

  int grid[n][m];
  // memset(grid, -1, sizeof(int) * (5 * 8));

  for (int i = 0; i < n; i++) {    // iterate over rows
    for (int j = 0; j < m; j++) {  // iterate over columns
      scanf("%d", &grid[i][j]);
    }
  }

  int i = rand() % n, j = rand() % m;
  /* moving in a specific direction in an array in any of 8 directions
   * -1, -1        -1, 0       -1, 1
   *  0, -1        [r, c]       0, 1
   *  1, -1         1, 0        1, 1
   */

  printf("(%d, %d): %d\n", i, j, grid[i][j]);
  printf("(%d, %d): %d\n", i - 1, j, grid[i - 1][j]);          // up
  printf("(%d, %d): %d\n", i + 1, j - 1, grid[i + 1][j - 1]);  // down-left

  return 0;
}