#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

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

int main(int argc, char const *argv[]) {
  IOS;
  FIO;

  int s, e, m;
  s = e = INT_MAX;
  m = 3892;

  // 2147483647 + 2147483647 > INT_MAX
  printf("%d\n", (s + e) / 2);  // integer overflow
  // (s + e + s - s) / 2 = (2s + e -s) / 2 = s + (e - s) / 2
  // 2147483647 + (2147483647-2147483647)/2 = 2147483647 + 0 <= INT_MAX
  printf("%d\n", s + (e - s) / 2);

  // 2147483647 * 3892 > INT_MAX
  printf("%d\n", (s * m) % 10);
  printf("%d\n", ((s % 10) * (m % 10)) % 10);

  return 0;
}
