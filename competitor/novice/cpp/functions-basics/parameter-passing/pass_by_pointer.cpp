#include <bits/stdc++.h>
using namespace std;

/*
 * When we pass address of variable (pointer) inside calling function to the
 * called function then the changes done inside called function is also
 * reflected inside calling function.
 *
 * A pointer in C++ is used to share a memory address among different
 * contexts (primarily functions). They are used whenever a function needs to
 * modify the content of a variable, but it does not have ownership.
 *
 * An example of pointer, int *p = &val; assigns the memory address of val to
 * pointer p. To access the content of the memory pointed to, prepend the
 * variable name with a *.
 *
 * For example, *p will return the value stored in val and any modification
 * to it will be performed on val.
 */

void increment(int *p) { (*p)++; }

int main() {
  int x = 10;
  printf("Value before increment: %d\n", x);
  increment(&x);
  // Pass by value just creates a copy of variable.
  printf("Value after increment: %d\n", x);

  return 0;
}