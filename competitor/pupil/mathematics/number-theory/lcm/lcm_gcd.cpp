#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

typedef long long ll;

/* LCM (Using GCD)
 * The idea behind this algorithm is LCM(A, B) = A*B / GCD(A, B).
 */
ll gcd(ll a, ll b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
  // O(log(max(a, b)))
  return a * b / gcd(a, b);
}

int main() {
  IOS;
  // FIO;

  ll a, b;
  scanf("%lld %lld\n", &a, &b);
  ll x = lcm(a, b);
  printf("%lld\n", x);

  return 0;
}