#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int minimum_cost(int c[], const int &n, const int &k) {
  sort(c, c + n, greater<int>());

  int cost = 0, x = 1;
  int i = 0, j;
  while (i < n) {
    j = 0;
    while (i < n && j < k) {
      cost += c[i] * x;
      i++;
      j++;
    }
    x++;
  }

  return cost;
}

int main() {
  IOS;
  // FIO;

  int n, k;
  scanf("%d%d", &n, &k);
  int c[n];
  for (int &ci : c) scanf("%d", &ci);
  int flowers_cost = minimum_cost(c, n, k);
  printf("%d\n", flowers_cost);

  return 0;
}