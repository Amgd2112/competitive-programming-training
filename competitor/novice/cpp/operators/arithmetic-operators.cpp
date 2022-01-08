#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

/* Arithmetic operators
 * are used to perform arithmetic operations on variables and data.
 * Operator | Operation
 *    +    	| Addition
 *    -	    | Subtraction
 *    *	    | Multiplication
 *    /	    | Division
 *    %	    | Modulo Operation (Remainder after division)
 */

int main(int argc, char const *argv[]) {
  IOS;
  FIO;

  int n, m;
  scanf("%d %d", &n, &m);

  printf("%d\n", n + m);
  printf("%d\n", n - m);
  printf("%d\n", n / m);
  printf("%d\n", n * m);
  printf("%d\n", n % m);

  return 0;
}
