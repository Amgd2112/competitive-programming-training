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

  int r1, r2, c1, c2, d1, d2;
  scanf("%d%d%d%d%d%d", &r1, &r2, &c1, &c2, &d1, &d2);

  int a1, a2, b1, b2;
  unordered_set<int> gems;
  int i = 0;
  while (++i < 10) {
    a1 = i;
    a2 = c1 - i;
    b1 = r1 - i;
    b2 = d1 - i;

    gems = {a1, a2, b1, b2};
    if (gems.size() != 4) continue;
    if (max({a1, a2, b1, b2}) > 9 || min({a1, a2, b1, b2}) < 1) continue;
    if ((d2 == b1 + a2) && (c2 == b1 + b2) && (r2 == a2 + b2)) break;
  }

  if (i == 10)
    printf("%d\n", -1);
  else
    printf("%d %d\n%d %d\n", a1, b1, a2, b2);

  return 0;
}