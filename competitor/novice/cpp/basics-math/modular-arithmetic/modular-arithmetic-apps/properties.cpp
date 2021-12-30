#include <bits/stdc++.h>
using namespace std;

/* Properties
 *
 * (a + b) % n = ((a % n) + (b % n)) % n
 * (a - b) % n = ((a % n) - (b % n) + n) % n
 * (a * b) % n = ((a % n) * (b % n)) % n
 * (a ^ b) % n = ((a % n) ^b %n) % n
 * (a / b) % n = ((a % n) / ((1/b) % n)) % n # multiplicative modulo inverse
 */

int main() {
  int n = 7, a = 9, b = 5;

  printf("%d %d\n", (a + b) % n, ((a % n) + (b % n)) % n);
  printf("%d %d\n", (a * b) % n, ((a % n) * (b % n)) % n);
  printf("%d %d\n", (int)pow(a, b) % n, ((int)pow((a % n), (b % n))) % n);

  return 0;
}

/* output:
 *  0 0
 *  3 3
 *  4 4
 */