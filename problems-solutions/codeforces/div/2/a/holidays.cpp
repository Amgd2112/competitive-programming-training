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

  int days;
  scanf("%d", &days);

  int weeks = (days / 7) * 2;
  int min_off = weeks + max((days % 7) - 5, 0);
  int max_off = weeks + min(days % 7, 2);

  printf("%d %d\n", min_off, max_off);

  return 0;
}