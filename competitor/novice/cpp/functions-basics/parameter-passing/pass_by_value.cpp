#include <bits/stdc++.h>
using namespace std;

/* Arguments can be passed from one method to other using parameters.
 * By default all, the variables, which are passed as parameters, are
 * passed-by-value. That means a separate copy is created inside the called
 * method and no changes done inside called method will reflect in calling
 * method.
 */
void increment(int v) { v++; }

int main() {
  int x = 10;
  printf("Value before increment: %d\n", x);
  increment(x);
  // Pass by value just creates a copy of variable.
  printf("Value after increment: %d\n", x);

  return 0;
}