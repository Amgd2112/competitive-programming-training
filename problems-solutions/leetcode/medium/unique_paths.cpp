#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

#define M 102
int grid[M][M] = {0};
int uniquePaths(int m, int n) {
  if (grid[m][n]) return grid[m][n];

  if (m == 1 || n == 1) {
    return 1;
  } else {
    return grid[m][n] = uniquePaths(m, n - 1) + uniquePaths(m - 1, n);
  }
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int m, n;
  scanf("%d%d", &m, &n);
  printf("%d\n", uniquePaths(m, n));

  return 0;
}