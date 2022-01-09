#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

#define N 1000
int grid[N][N];

int diagonal_difference(const int &n) {
  int d1 = 0, d2 = 0;

  int j = 0, k = n - 1;
  for (int i = 0; i < n; i++) {
    d1 += grid[i][j++];
    d2 += grid[i][k--];
  }

  return abs(d1 - d2);
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &grid[i][j]);
    }
  }

  printf("%d\n", diagonal_difference(n));

  return 0;
}