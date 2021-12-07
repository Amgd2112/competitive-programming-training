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

  int p, n;
  scanf("%d%d", &p, &n);

  bool a[p] = {false};
  int x, conflict = -1;
  for (int i = 0; i < n; i++) {
    scanf("%d", &x);
    if (a[x % p]) {
      conflict = i + 1;
      break;
    } else
      a[x % p] = true;
  }

  printf("%d\n", conflict);

  return 0;
}