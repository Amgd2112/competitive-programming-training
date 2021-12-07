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

  long long n;
  scanf("%lld\n", &n);

  int x = 0;
  while (n) {
    x += (n & 1);
    n >>= 1;
  }

  printf("%d\n", x);

  return 0;
}