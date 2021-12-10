#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

typedef long long ll;

/* GCD (Euclidean Algorithm)
 * The idea behind this algorithm is GCD(A, B) = GCD(B, A%B).
 */
ll gcd(ll a, ll b) {
  // O(log(max(A, B)))
  if (b == 0) return a;
  return gcd(b, a % b);
}

int main() {
  IOS;
  //   FIO;

  ll a, b;
  scanf("%lld %lld\n", &a, &b);
  int x = gcd(a, b);
  printf("%d\n", x);

  return 0;
}
