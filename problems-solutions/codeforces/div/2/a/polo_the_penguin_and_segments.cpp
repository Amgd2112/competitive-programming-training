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

  int n, k;
  scanf("%d %d\n", &n, &k);

  int l, r, p = 0;
  while (n--) {
    scanf("%d %d\n", &l, &r);
    p += (r - l) + 1;
  }

  printf("%d\n", (k - (p % k)) % k);

  return 0;
}