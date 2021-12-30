#include <bits/stdc++.h>
using namespace std;

/* Bitwise Operators
 * In C++, bitwise operators are used to perform operations on individual bits.
 * They can only be used alongside char and int data types.
 *
 *
 * Operator | Description
 *  &       | Binary AND
 *  |       | Binary OR
 *  ^       | Binary XOR
 *  ~       | Binary One's Complement
 *  <<      | Binary Shift Left
 *  >>      | Binary Shift Right
 */

int main() {
  int a = 12, b = 25;

  printf("a & b = %d\n", (a & b));
  printf("a | b = %d\n", (a | b));
  printf("a ^ b = %d\n", (a ^ b));
  printf("~a = %d\n", ~a);
  printf("b << 1 = %d\n", (b << 1));
  printf("a >> 1 = %d\n", (a >> 1));

  return 0;
}

/* output:
 *  a & b = 8
 *  a | b = 29
 *  a ^ b = 21
 *  ~a = -13
 *  b << 1 = 50
 *  a >> 1 = 6
 */