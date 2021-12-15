#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

unsigned long long minimum_miles(int c[], int n) {
  unsigned long long miles = 0;
  sort(c, c + n, [](const int &a, const int &b) { return a >= b; });
  for (int i = 0; i < n; i++) miles += ((unsigned long long)pow(2, i)) * c[i];
  return miles;
}

int main() {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  int c[n];
  for (int &ci : c) scanf("%d", &ci);
  printf("%llu\n", minimum_miles(c, n));

  return 0;
}