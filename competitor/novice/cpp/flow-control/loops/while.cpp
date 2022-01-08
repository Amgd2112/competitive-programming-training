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

  /* TODO:
   *
   * 1. Read No. inputs
   * 2. Loop to read each element & display
   */

  int n;
  scanf("%d", &n);

  int i = 0, x;
  while (i++ < n) {  // trick: while (scanf("%d", &x), i++ < n)
    scanf("%d", &x);
    printf("%d ", x);
  }

  return 0;
}