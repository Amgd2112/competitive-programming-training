#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll taum_B_day(ll b, ll w, ll bc, ll wc, ll z) {
  ll d = min(b * bc + w * wc, b * bc + w * (bc + z));
  return min(d, w * wc + b * (wc + z));
}

int main() {
  int test_cases;
  scanf("%d\n", &test_cases);
  while (test_cases--) {
    ll b, w, bc, wc, z;
    scanf("%lld %lld\n", &b, &w);
    scanf("%lld %lld %lld\n", &bc, &wc, &z);

    ll min_units = taum_B_day(b, w, bc, wc, z);
    printf("%lld\n", min_units);
  }
  return 0;
}