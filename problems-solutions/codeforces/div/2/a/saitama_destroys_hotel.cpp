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

  int n, s;
  scanf("%d%d", &n, &s);

  int t = INT_MIN;
  int fi, ti;
  while (n--) {
    scanf("%d%d", &fi, &ti);
    t = max(fi + ti, t);
  }

  printf("%d\n", (t > s) ? t : s);

  return 0;
}