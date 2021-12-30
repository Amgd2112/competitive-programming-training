#include <bits/stdc++.h>
using namespace std;

/* Increment and Decrement Operators
 * C++ also provides increment and decrement operators respectively.
 *    ++ increases the value of the operand by 1
 *    -- decreases it by 1
 */

int main() {
  int x = 99;

  printf("++x = %d\n", ++x);  // increment first, print second
  printf("x++ = %d\n", x++);  // print first, increment second
  printf("x-- = %d\n", x--);  // print first, decrement second
  printf("--x = %d\n", --x);  // decrement first, print second

  return 0;
}

/* output:
 *  ++x = 100
 *  x++ = 100
 *  x-- = 101
 *  --x = 99
 */