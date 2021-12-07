#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

long long gcd(long long a, long long b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

int main() {
  IOS;
  // FIO;

  long long n, m;
  scanf("%lld %lld", &n, &m);

  long long a = n, b = n + 1, c = n + 2;
  while (c <= m) {
    if (gcd(a, b) == 1 && gcd(b, c) == 1 && gcd(a, c) == 2) break;
    a++;
    b++;
    c++;
  }

  if (c > m)
    printf("%d\n", -1);
  else
    printf("%lld %lld %lld\n", a, b, c);

  return 0;
}