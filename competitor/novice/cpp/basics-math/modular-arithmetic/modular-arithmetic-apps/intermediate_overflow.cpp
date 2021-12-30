#include <bits/stdc++.h>
using namespace std;

/* Intermediate Overflow
 *
 * If you have an intermediate overflow operation, to avoid that we can take a
 * number that is larger than the answer and apply modulus operation to these
 * operations.
 * Ex, a = 10^18, b = 10^18, and n = 10^9 + 7. You have to find (a * b) % n.
 *
 * When you multiply a with b, the answer is 10^36,  which does not conform
 * with the standard integer data types. Therefore, to avoid this we used the
 * properties.
 * (a * b) % n = ((a % n) * (b % n)) % n = (49 * 49) % (10^9 + 7) = 2401
 */

int main() {
  long long s, e, m;
  s = e = LONG_LONG_MAX;
  m = 3892;

  printf("%lld\n", (s + e) / 2);  // integer overflow
  printf("%lld\n", s + (e - s) / 2);

  printf("%lld\n", (s * m) % 10);
  printf("%lld\n", ((s % 10) * (m % 10)) % 10);

  return 0;
}

/* output:
 *  -1
 *  9223372036854775807
 *  -2
 *  4
 */