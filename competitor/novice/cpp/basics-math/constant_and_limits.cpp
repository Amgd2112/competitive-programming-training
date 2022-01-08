#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

#define N 100
#define M 500

int main(int argc, char const *argv[]) {
  IOS;
  FIO;

  // Limits
  printf("Max of int: %d\n", INT_MAX);
  printf("Min of int: %d\n", INT_MIN);
  printf("Max of long long: %lld\n", LONG_LONG_MAX);

  // Constants
  printf("PI: %0.9lf\n", M_PI);
  printf("sqrt(2): %0.4lf\n", M_SQRT2);
  printf("e: %lf\n", M_E);
  printf("log10(e): %lf\n", M_LOG10E);

  return 0;
}
