#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

/* Declaration
 * A C++ program consists of various entities such as variables, functions,
 * types, and namespaces. Each of these entities must be declared before they
 * can be used. A declaration specifies a unique name for the entity, along with
 * information about its type and other characteristics.
 *
 * In C++ the point at which a name is declared is the point at which it becomes
 * visible to the compiler. You can't refer to a function or class that is
 * declared at some later point in the compilation unit. Variables should be
 * declared as close as possible before the point at which they're used.
 */

int foo(int n, int x);  // forward declaration

int main(int argc, char const *argv[]) {
  IOS;
  FIO;

  int n = 1, x = 12;
  int d = foo(n, x);
  printf("%d\n", d);
  printf("%d\n", n);

  return 0;
}

int foo(int n, int x) {
  // n * 2 * 2 * 2 } x times
  for (int i = 0; i < x; i++) {
    n *= 2;
  }

  return n;
}
