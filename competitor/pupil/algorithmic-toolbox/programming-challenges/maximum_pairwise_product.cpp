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

  int n;
  scanf("%d\n", &n);

  int ai, a_max1 = -1, a_max2 = -1;
  while (n--) {
    scanf("%d ", &ai);

    if (ai > a_max1 && a_max1 >= a_max2) {
      a_max2 = a_max1;
      a_max1 = ai;
      continue;
    }

    if (ai > a_max2) a_max2 = ai;
  }

  long long res = (long long)a_max1 * a_max2;
  printf("%lld\n", res);

  return 0;
}