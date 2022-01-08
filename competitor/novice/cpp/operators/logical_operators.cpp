#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

/* Logical Operators
 * Logical operators are used to check whether an expression is true or false.
 * If the expression is true, it returns 1 whereas if the expression is false,
 * it returns 0.
 *
 * Operator | Example                       | Meaning
 *    &&    | expression1 && expression2    | Logical AND
 *    ||    | expression1 || expression2    | Logical OR
 *    !     | !expression                   | Logical NOT
 *
 * x & y = x(11101) & y(101011) = 010001
 * x && y = x(bool => 1) & y(bool => 1) = 1
 */

int main(int argc, char const *argv[]) {
  IOS;
  FIO;

  int n, m;
  scanf("%d %d", &n, &m);
  bool result = false;

  result = (n != m) && (n < m);
  printf("(%d != %d) && (%d < %d) is %d\n", n, m, n, m, result);

  result = (n == m) && (n < m);
  printf("(%d == %d) && (%d < %d) is %d\n", n, m, n, m, result);

  result = (n == m) && (n > m);
  printf("(%d == %d) && (%d > %d) is %d\n", n, m, n, m, result);

  result = (n != m) || (n < m);
  printf("(%d != %d) || (%d < %d) is %d\n", n, m, n, m, result);

  result = (n != m) || (n > m);
  printf("(%d != %d) || (%d > %d) is %d\n", n, m, n, m, result);

  result = (n == m) || (n > m);
  printf("(%d == %d) || (%d > %d) is %d\n", n, m, n, m, result);

  result = !(m == 2);
  printf("!(%d == 2) is %d\n", m, result);

  result = !(m == m);
  printf("!(%d == %d) is %d\n", m, m, result);

  return 0;
}