#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

double distance(double x1, double y1, double x2, double y2) {
  return sqrt(pow(y2 - y1, 2) + pow(x2 - x1, 2));
}

int main() {
  IOS;
  // FIO;

  int n, k;
  scanf("%d%d", &n, &k);

  double d = 0;
  int x1, x2, y1, y2;
  scanf("%d%d", &x1, &y1);
  while (--n) {
    scanf("%d%d", &x2, &y2);
    d += distance(x1, y1, x2, y2);
    x1 = x2;
    y1 = y2;
  }

  printf("%lf\n", (d / 50) * k);

  return 0;
}