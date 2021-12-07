#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int power(int x, int n, int m) {
  if (n == 0) return 1;
  if (n % 2 == 0) return power(((x % m) * (x % m)) % m, n / 2, m) % m;
  return ((x % m) * (power(x, n - 1, m)) % m) % m;
}

int main() {
  IOS;
  //   FIO;

  int num = 1378, n;
  scanf("%d", &n);
  printf("%d\n", power(num, n, 10));

  return 0;
}