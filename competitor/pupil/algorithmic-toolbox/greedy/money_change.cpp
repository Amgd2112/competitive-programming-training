#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int min_coins(int money, vector<int> coins) {
  sort(coins.begin(), coins.end());
  reverse(coins.begin(), coins.end());

  int num_coins = 0, div;
  for (int &coin : coins) {
    div = money / coin;
    num_coins += div;
    money -= div * coin;
  }

  return num_coins;
}

int main() {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  vector<int> m = {1, 5, 10};
  int coins = min_coins(n, m);
  printf("%d\n", coins);

  return 0;
}