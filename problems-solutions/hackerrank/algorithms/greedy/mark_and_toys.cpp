#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int maximum_toys(int p[], int n, int k) {
  sort(p, p + n);
  int i = 0, toys = 0;
  while (i < n && p[i] <= k) {
    k -= p[i];
    toys++;
    i++;
  }
  return toys;
}

int main() {
  IOS;
  // FIO;

  int n, k;
  scanf("%d%d", &n, &k);
  int p[n];
  for (int &pi : p) scanf("%d", &pi);

  int toys = maximum_toys(p, n, k);
  printf("%d\n", toys);

  return 0;
}