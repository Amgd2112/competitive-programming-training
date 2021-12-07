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

  vector<int> b(5);
  for (int &bat : b) scanf("%d", &bat);
  int rate = -1, palyers = 5;
  int coins = accumulate(b.begin(), b.end(), 0);
  if (coins > 0 && coins % palyers == 0) rate = coins / palyers;
  printf("%d\n", rate);

  return 0;
}