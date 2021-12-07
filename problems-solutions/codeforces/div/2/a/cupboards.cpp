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
  int ri, li;
  int tr = 0, tl = 0;

  for (int i = 0; i < n; i++) {
    scanf("%d %d\n", &li, &ri);
    tr += ri;
    tl += li;
  }

  int t = min(n - tr, n - (n - tr)) + min(n - tl, n - (n - tl));
  printf("%d\n", t);

  return 0;
}