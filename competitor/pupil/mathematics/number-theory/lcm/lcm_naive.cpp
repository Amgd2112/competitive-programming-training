#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

typedef long long ll;

/* The Least Commone Multiple of two or more numbers is the smallest positive
 * number that is a multiple of two or more numbers.
 *
 * For example, the LCM of 6 and 10 is 30 because it is the smallest positive
 * number that is a multiple of both 6 and 10.
 */
ll lcm(ll a, ll b) {
  // O(max(a, b))
  if (a < b) swap(a, b);

  ll i, j;
  i = j = 1;

  while (i >= j) {
    if (a * j > b * i)
      i++;
    else if (a * j < b * i)
      j++;
    else
      return a * j;
  }
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