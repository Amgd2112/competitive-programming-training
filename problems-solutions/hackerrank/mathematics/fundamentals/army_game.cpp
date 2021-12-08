#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

int packages(double n, double m) { return ceil(n / 2) * ceil(m / 2); }

int main() {
  IOS;

  int n, m;
  scanf("%d%d", &n, &m);
  printf("%d\n", packages(n, m));

  return 0;
}