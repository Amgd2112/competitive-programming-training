#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

#define N 1000000000

int maximum_prizes(int &n) {
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

void display_prizes(int &n, int &prizes) {
  for (int prize = 1; prize < prizes; prize++) printf("%d ", prize);
  printf("%d\n", n - ((prizes % N * (prizes - 1) % N) % N) / 2);
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