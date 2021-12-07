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
  int n, m;
  scanf("%d%d", &n, &m);

  int socks = n;
  int carry = 0;
  while (n >= m) {
    socks += n / m;
    carry = n % m;
    n /= m;
    n += carry;
  }

  printf("%d\n", socks);

  return 0;
}