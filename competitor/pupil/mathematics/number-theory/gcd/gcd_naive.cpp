#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

typedef long long ll;

ll gcd(ll a, ll b) {
  // O(min(A, B))
  for (ll i = min(a, b); i > 0; i--) {
    if (a % i == 0 && b % i == 0) return i;
  }
  return 1;
}

int main() {
  IOS;
  // FIO;

  ll a, b;
  scanf("%lld %lld\n", &a, &b);

  int x = gcd(a, b);
  printf("%d\n", x);

  return 0;
}
