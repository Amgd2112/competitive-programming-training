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

// lcm a, b = a * b / gcd a, b
long long lcm(long long a, long long b) { return a * b / gcd(a, b); }

int main() {
  IOS;
  // FIO;

  long long a, b;
  scanf("%lld %lld\n", &a, &b);
  printf("%lld\n", lcm(a, b));

  return 0;
}
