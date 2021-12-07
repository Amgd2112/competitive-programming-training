#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int main() {
  IOS;
  //   FIO;

  string a, b;
  getline(cin, a);
  getline(cin, b);

  int ans = -1;
  if (a != b) ans = max(a.size(), b.size());
  printf("%d\n", ans);

  return 0;
}