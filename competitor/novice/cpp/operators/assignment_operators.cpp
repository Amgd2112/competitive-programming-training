#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

/* Assignment Operators
 *   Operator | Example     | Same As
 *   =        | x = 5       | x = 5
 *   +=       | x += 3      | x = x + 3
 *   -=       | x -= 3      | x = x - 3
 *   *=       | x *= 3      | x = x * 3
 *   /=       | x /= 3      | x = x / 3
 *   %=       | x %= 3      | x = x % 3
 *   &=       | x &= 3      | x = x & 3
 *   |=       | x |= 3      | x = x | 3
 *   ^=       | x ^= 3      | x = x ^ 3
 *   >>=      | x >>=       | x = x >> 3
 *   <<=      | x <<=       | x = x << 3
 */

int main(int argc, char const *argv[]) {
  IOS;
  FIO;

  int n, m;
  scanf("%d %d", &n, &m);

  printf("%d\n", n + m);
  printf("%d\n", n);

  n = n + m;
  printf("%d\n", n);

  n += m;
  printf("%d\n", n);

  return 0;
}