#include <bits/stdc++.h>
using namespace std;

/* Assignment Operators
 *   Operator	| Example	  | Same As
 *   =        | x = 5     | x = 5
 *   +=       | x += 3    | x = x + 3
 *   -=	      | x -= 3    | x = x - 3
 *   *=	      | x *= 3    | x = x * 3
 *   /=	      | x /= 3    | x = x / 3
 *   %=	      | x %= 3    | x = x % 3
 *   &=	      | x &= 3    | x = x & 3
 *   |=	      | x |= 3    | x = x | 3
 *   ^=	      | x ^= 3    | x = x ^ 3
 *   >>=	   	| x >>= 3   | x = x >> 3
 *   <<=	  	| x <<= 3   | x = x << 3
 */

int main() {
  int x = 5;

  x += 3;
  x *= 2;
  printf("x: %d\n", x);

  return 0;
}

/* output:
 *  x: 16
 */