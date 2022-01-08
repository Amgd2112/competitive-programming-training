#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

/* Facts
 *
 * # | Fact
 * 1 | X % 10 = last digit of X, X/10 remove last digit of X
 * 2 | if X divisible by n
 *      X % n = 0
 * 3 | -X % n != X % n
 *     r = X % n     # r in {0, .., n-1}
 *        r = 4 % 5 = 4
 *        r = 5 % 5 = 0
 *        r = 6 % 5 = 1
 *        r = 7 % 5 = 2
 *        r = 8 % 5 = 3
 *        r = 9 % 5 = 4
 *        r = 10 % 5 = 0
 *     r = -X % n    # r in {-(n-1), .., 0}
 * 4 | if a - b = n
 *      a % n = b % n
 * 5 | X % (n + m) != (X % n) + (X % m)
 */

int main(int argc, char const *argv[]) {
  IOS;
  FIO;

  int n = 12, a = 3899, b = 392;

  printf("%d\n", a % 10);  // last digit
  printf("%d\n", a / 10);

  printf("%d is %s\n", a, (a % 2 == 0) ? "Even" : "Odd");

  printf("%d %d\n", a % n, -a % n);
  printf("%d\n", ((-a % n) + n) % n);

  printf("%d != %d\n", a % (n + b), (a % n) + (a % b));

  return 0;
}
