#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int maximum_prizes(int n) {
  int i = 1;
  int x = 1;
  int inc = 2;

  while (x + inc <= n) {
    x += inc;
    inc++;
    i++;
  }

  return i;
}

void display_prizes(int n, int prizes) {
  for (int p = 1; p < prizes; p++) printf("%d ", p);
  printf("%lld\n", n - ((long long)prizes * (prizes - 1)) / 2);
}

int main() {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);

  int prizes = maximum_prizes(n);
  printf("%d\n", prizes);
  display_prizes(n, prizes);

  return 0;
}