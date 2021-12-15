#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

bool grid_challenge(string grids[], int &n) {
  for (int i = 0; i < n; i++) sort(grids[i].begin(), grids[i].end());
  for (int i = 1; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (grids[i][j] < grids[i - 1][j]) {
        return false;
      }
    }
  }

  return true;
}

int main() {
  IOS;
  // FIO;

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    cin.get();

    string grids[n];
    for (int i = 0; i < n; i++) getline(cin, grids[i]);
    printf("%s\n", (grid_challenge(grids, n)) ? "YES" : "NO");
  }

  return 0;
}
