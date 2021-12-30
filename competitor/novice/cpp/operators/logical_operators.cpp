#include <bits/stdc++.h>
using namespace std;

/* Logical Operators
 * Logical operators are used to check whether an expression is true or false.
 * If the expression is true, it returns 1 whereas if the expression is false,
 * it returns 0.
 *
 * Operator | Example                       | Meaning
 * &&       | expression1 && expression2    | Logical AND
 * ||       | expression1 || expression2    | Logical OR
 * !        | !expression                   | Logical NOT
 */

int main() {
  bool result;

  result = (3 != 5) && (3 < 5);  // true
  printf("(3 != 5) && (3 < 5) is %d\n", result);

  result = (3 == 5) && (3 < 5);  // false
  printf("(3 == 5) && (3 < 5) is %d\n", result);

  result = (3 == 5) && (3 > 5);  // false
  printf("(3 == 5) && (3 > 5) is %d\n", result);

  result = (3 != 5) || (3 < 5);  // true
  printf("(3 != 5) || (3 < 5) is %d\n", result);

  result = (3 != 5) || (3 > 5);  // true
  printf("(3 != 5) || (3 > 5) is %d\n", result);

  result = (3 == 5) || (3 > 5);  // false
  printf("(3 == 5) || (3 > 5) is %d\n", result);

  result = !(5 == 2);  // true
  printf("!(5 == 2) is %d\n", result);

  result = !(5 == 5);  // false
  printf("!(5 == 5) is %d\n", result);

  return 0;
}

/* output:
 *  (3 != 5) && (3 < 5) is 1
 *  (3 == 5) && (3 < 5) is 0
 *  (3 == 5) && (3 > 5) is 0
 *  (3 != 5) || (3 < 5) is 1
 *  (3 != 5) || (3 > 5) is 1
 *  (3 == 5) || (3 > 5) is 0
 *  !(5 == 2) is 1
 *  !(5 == 5) is 0
 */