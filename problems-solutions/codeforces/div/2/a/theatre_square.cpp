#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

typedef unsigned long long llu;

int main() {
  IOS;
  //   FIO;

  llu n, m, a;
  scanf("%llu%llu%llu", &n, &m, &a);
  printf("%llu\n", (llu)ceil(n / (double)a) * (llu)ceil(m / (double)a));
  return 0;
}