#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int main(int argc, char const *argv[]) {
  IOS;
  FIO;

  /* Integer Cycle
   * r = X % n     # r in {0, .., n-1}
   */

  int n = 4;
  for (int i = 0; i < 100; i++) {
    if (i % n == 0) printf("\n");
    printf("%d ", i);
  }

  return 0;
}