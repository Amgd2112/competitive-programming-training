#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

/* Properties
 *
 * (a + b) % n = ((a % n) + (b % n)) % n
 * (a - b) % n = ((a % n) - (b % n) + n) % n
 * (a * b) % n = ((a % n) * (b % n)) % n
 * (a ^ b) % n = ((a % n) ^b %n) % n
 * (a / b) % n = ((a % n) / ((1/b) % n)) % n # multiplicative modulo inverse
 */

int main(int argc, char const *argv[]) {
  IOS;
  FIO;

  int n = 7, a = 9, b = 5;

  printf("%d == %d\n", (a + b) % n, ((a % n) + (b % n)) % n);
  printf("%d == %d\n", (a * b) % n, ((a % n) * (b % n)) % n);
  printf("%d == %d\n", (int)pow(a, b) % n, ((int)pow((a % n), (b % n))) % n);

  return 0;
}
