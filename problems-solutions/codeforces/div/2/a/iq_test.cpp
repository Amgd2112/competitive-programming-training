#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int main() {
  IOS;
  // FIO;

  int n = 4;
  bool a[n][n];

  string row;
  for (int i = 0; i < n; i++) {
    getline(cin, row);
    for (int j = 0; j < n; j++) {
      a[i][j] = row[j] == '.';
    }
  }

  bool pass = false;
  for (int x, j, i = 0; i < n - 1; i++) {
    for (j = 0; j < n - 1; j++) {
      x = a[i][j] + a[i][j + 1] + a[i + 1][j] + a[i + 1][j + 1];
      if (x == 2) continue;
      pass = true;
      break;
    }
  }

  printf("%s\n", (pass) ? "YES" : "NO");

  return 0;
}