#include <bits/stdc++.h>
using namespace std;

/* Integer Cycle
 * r = X % n     # r in {0, .., n-1}
 */

int main() {
  int n = 4;

  printf("%d\n", 0 % n);
  printf("%d\n", 1 % n);
  printf("%d\n", 2 % n);
  printf("%d\n", 3 % n);
  printf("%d\n", 4 % n);
  printf("%d\n", 5 % n);
  printf("%d\n", 6 % n);
  printf("%d\n", 7 % n);
  printf("%d\n", 8 % n);

  return 0;
}

/* output:
 *  0
 *  1
 *  2
 *  3
 *  0
 *  1
 *  2
 *  3
 *  0
 */