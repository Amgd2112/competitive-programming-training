#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

bool is_good_number(long long n, int k) {
  unordered_set<int> digits;
  while (n) {
    if (n % 10 <= k) digits.insert(n % 10);
    n /= 10;
  }

  if (digits.size() == k + 1) return true;
  return false;
}

int main() {
  IOS;
  // FIO;

  int n, k;
  scanf("%d%d", &n, &k);
  int cnt = 0;
  long long a;
  while (n--) {
    scanf("%lld", &a);
    cnt += is_good_number(a, k);
  }

  printf("%d\n", cnt);

  return 0;
}