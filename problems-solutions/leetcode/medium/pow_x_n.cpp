#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

double myPow(double x, int n) {
  if (n < 0) {
    return 1.0 / (myPow(x, -(n + 1)) * x);  // to avoid int overflow INT_MIN
  }

  if (x < 0) {
    return (n & 1) ? -myPow(-x, n) : myPow(-x, n);  // odd power & even power
  }

  if (n == 0) {
    return 1;
  } else {
    double y = myPow(x, n / 2);
    if (n % 2 == 0) {
      return y * y;
    } else {
      return x * y * y;
    }
  }
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  double x;
  int n;
  scanf("%lf%d", &x, &n);
  printf("%lf\n", myPow(x, n));

  return 0;
}