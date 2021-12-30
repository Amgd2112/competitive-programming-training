#include <bits/stdc++.h>
using namespace std;

/* Relational Operators
 * A relational operator is used to check the relationship between two operands.
 *
 * Operator | Meaning                  | Example
 * ==       | Is Equal                 | To	3 == 5 gives us false
 * !=	      | Not Equal To	           | 3 != 5 gives us true
 * >        | Greater Than	           | 3 > 5 gives us false
 * <        | Less Than	               | 3 < 5 gives us true
 * >=       | Greater Than or Equal To | 3 >= 5 give us false
 * <=       | Less Than or Equal To    | 3 <= 5 gives us true
 */

int main() {
  int a, b;
  a = 3;
  b = 5;
  bool result;

  result = (a == b);  // false
  printf("3 == 5 is %d\n", result);

  result = (a != b);  // true
  printf("3 != 5 is %d\n", result);

  result = a > b;  // false
  printf("3 > 5 is %d\n", result);

  result = a < b;  // true
  printf("3 < 5 is %d\n", result);

  result = a >= b;  // false
  printf("3 >= 5 is %d\n", result);

  result = a <= b;  // true
  printf("3 <= 5 is %d\n", result);

  return 0;
}

/* output:
 *  3 == 5 is 0
 *  3 != 5 is 1
 *  3 > 5 is 0
 *  3 < 5 is 1
 *  3 >= 5 is 0
 *  3 <= 5 is 1
 */