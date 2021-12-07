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

  int n;
  scanf("%d\n", &n);
  char dir[n];
  scanf("%s\n", &dir);
  int a[n];
  for (int &ai : a) scanf("%d ", &ai);

  int collision = INT_MAX;
  for (int x, i = 0; i < n - 1; i++) {
    if (dir[i] == 'R' && dir[i + 1] == 'L') {
      collision = min(collision, (a[i + 1] - a[i]) / 2);
    }
  }

  printf("%d\n", (collision == INT_MAX) ? -1 : collision);

  return 0;
}