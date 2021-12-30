#include <bits/stdc++.h>
using namespace std;

int main() {
  const int N = INT_MAX;
  long long num = 9328798327948628;
  printf("%lld\n", num);

  bool res = num < N;
  printf("%d\n", res);

  printf("long long upper: %lld, lower: %lld\n", LONG_LONG_MAX, LONG_LONG_MIN);

  printf("%0.9lf\n", M_PI);     // math -> pi
  printf("%0.4lf\n", M_SQRT2);  // math -> sqrt(2)
  printf("%lf\n", M_E);         // math -> e
  printf("%lf\n", M_LOG10E);    // math -> log10(e)

  return 0;
}

/* output:
 *  9328798327948628
 *  0
 *  long long upper: 9223372036854775807, lower: -9223372036854775808
 *  3.141592654
 *  1.4142
 *  2.718282
 *  0.434294
 */