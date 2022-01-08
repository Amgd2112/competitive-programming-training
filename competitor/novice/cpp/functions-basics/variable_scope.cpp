#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

/*
 * Function scope means it is visible throughout a function body even before
 * its point of declaration.
 *
 * If a variable is defined outside all functions, then it is called a global
 * variable. The scope of a global variable is the whole program. This means, It
 * can be used and changed at any part of the program after its declaration.
 */

// global var
char name[10] = "Amgd";
void change_name(char new_name[]) { strcpy(name, new_name); }
void change_name(char name[], char new_name[]) { strcpy(name, new_name); }

/*
 *  A static local variable exists only inside a function where it is declared
 * (similar to a local variable), but its lifetime starts when the function is
 * called and ends only when the program ends.
 */

void increment() {
  static int var = 10;  // executed once
  ++var;
  printf("%d\n", var);
}

int main(int argc, char const *argv[]) {
  IOS;
  FIO;

  // global variable
  printf("Old name: %s\n", name);

  char new_name[] = "Hussein";
  change_name(new_name);
  printf("New name: %s\n", name);

  char name[] = "Amgad";
  change_name(new_name, name);
  printf("New name: %s\n", new_name);

  // local static variable
  increment();
  increment();

  return 0;
}
