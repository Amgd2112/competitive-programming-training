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
  scanf("%d", &n);

  int x, a, b;
  scanf("%d%d%d", &x, &a, &b);
  unordered_set<int> faces = {a, 7 - a, b, 7 - b};
  bool possible = true;

  while (--n) {
    scanf("%d%d", &a, &b);
    if (faces.find(a) == faces.end() || faces.find(b) == faces.end()) {
      possible = false;
      break;
    }
  }

  printf("%s\n", (possible) ? "YES" : "NO");

  return 0;
}