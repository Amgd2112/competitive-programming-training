// number of unique grid paths
#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int grid_paths(const int &n, const int &m) {
  if (n == 1 || m == 1) return 1;
  return grid_paths(n - 1, m) + grid_paths(n, m - 1);
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int n, m;
  scanf("%d%d", &n, &m);
  int paths = grid_paths(n, m);
  printf("%d\n", paths);

  return 0;
}