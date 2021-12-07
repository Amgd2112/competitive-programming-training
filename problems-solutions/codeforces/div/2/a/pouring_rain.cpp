#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);
#define PI acos(-1.0)

int main() {
  IOS;
  // FIO;

  int d, h, v, e;
  scanf("%d%d%d%d", &d, &h, &v, &e);

  double p = (PI * e * d * d) / 4.0;
  double a = (PI * h * d * d) / 4.0;
  if (p < v) {
    double t = a / (v - p);
    printf("YES\n%lf\n", t);
  } else {
    printf("NO");
  }

  return 0;
}