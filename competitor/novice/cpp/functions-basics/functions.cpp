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
 * A function is a block of code which only runs when it is called.
 * You can pass data, known as parameters, into a function.
 *
 * Functions are used to perform certain actions, and they are important for
 * reusing code: "Define the code once, and use it many times".
 */

void display_range(int start, int stop) {
  //  Void means that the function does not have a return value.

  while (start <= stop) {
    printf("%d ", start++);
  }
  printf("\n");
}

//  Return means that the function has a value.
int sum(int n, int m) { return n + m; }

int main(int argc, char const *argv[]) {
  IOS;
  FIO;

  // doesn't return value
  display_range(10, 100);

  int s = sum(10, 29018);
  printf("%d\n", s);

  return 0;
}
