#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

long long gcd_naive(long long a, long long b) {
  long long d = 1, n = min(a, b);
  for (long long i = 1; i <= n; i++) {
    if (a % i == 0 && b % i == 0) d = i;
  }
  return d;
}

// gcd a, b = gcd b, b%a
long long gcd(long long a, long long b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

int main() {
  IOS;
  //   FIO;

  long long a, b;
  scanf("%lld %lld\n", &a, &b);

  // printf("%lld\n", gcd_naive(a, b));
  printf("%lld\n", gcd(a, b));

  return 0;
}
