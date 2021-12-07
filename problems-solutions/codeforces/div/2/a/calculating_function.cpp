#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int main() {
  IOS;
  //   FIO;

  long long n;
  scanf("%lld", &n);
  printf("%lld\n", (n % 2 == 0) ? n / 2 : -n / 2 - 1);

  return 0;
}