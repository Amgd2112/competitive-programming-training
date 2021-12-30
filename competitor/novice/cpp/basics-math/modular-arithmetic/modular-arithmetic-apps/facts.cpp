#include <bits/stdc++.h>
using namespace std;

/* Facts
 *
 * # | Fact
 * 1 | X % 10 = last digit of X, X/10 remove last digit of X
 * 2 | if X divisible by n
 *      X % n = 0
 * 3 | -X % n != X % n
 *        r = X % n     # r in {0, .., n-1}
 *        r = -X % n    # r in {-(n-1), .., 0}
 * 4 | if a - b = n
 *      a % n = b % n
 * 5 | X % (n + m) != (X % n) + (X % m)
 */

int main() {
  int n = 12, a = 3899, b = 392;

  printf("%d\n", a % 10);  // last digit
  printf("%d\n", a / 10);
  printf("%d\n", a % 2 == 0);  // even or odd

  printf("%d %d\n", a % n, -a % n);
  printf("%d %d\n", (b - a) % n, ((b % n) - (a % n)) % n);

  printf("%d %d\n", a % (n + b), (a % n) + (a % b));

  return 0;
}

/* output:
 *  9
 *  389
 *  false
 *  11 -11
 *  -3 -3
 *  263 382
 */