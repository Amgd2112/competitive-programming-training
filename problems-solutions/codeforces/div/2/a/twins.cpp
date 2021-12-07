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
  int coins[n];

  for (int &coin : coins) scanf("%d", &coin);

  int total, cnt, taken;
  total = accumulate(coins, coins + n, 0);
  cnt = taken = 0;

  sort(coins, coins + n);
  for (int i = n - 1; i > -1; i--) {
    if (taken > total) break;
    total -= coins[i];
    taken += coins[i];
    cnt++;
  }

  printf("%d\n", cnt);
  return 0;
}