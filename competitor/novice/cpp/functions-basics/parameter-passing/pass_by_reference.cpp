#include <bits/stdc++.h>
using namespace std;

/*
 * If you need to change the value of the parameter inside the method, then you
 * should use call by reference. C++ language by default passes by value.
 * In order to access the memory address of a variable, Val, prepend it
 * with "&" sign. For example, &val returns the memory address of val.
 * The variable inside the called function also refer to the same variable
 * inside the calling function. When the value of reference variable is changed
 * then the original variable value also change.
 */

void increment(int &r) { r++; }

int main() {
  int x = 10;
  printf("Value before increment: %d\n", x);
  increment(x);
  printf("Value after increment: %d\n", x);

  return 0;
}