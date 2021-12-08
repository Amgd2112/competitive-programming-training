#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

int height(double b, double a) { return ceil(2 * a / b); }

int main() {
  IOS;

  int b, a;
  scanf("%d%d", &b, &a);
  printf("%d\n", height(b, a));

  return 0;
}