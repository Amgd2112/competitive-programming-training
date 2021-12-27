#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int three_plus_one_series(const int &n) {
  if (n == 1) return n;
  return 1 + three_plus_one_series((n % 2 != 0) ? 3 * n + 1 : n / 2);
}

int main() {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  int s = three_plus_one_series(n);
  // n=22: 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1
  printf("%d\n", s);

  return 0;
}