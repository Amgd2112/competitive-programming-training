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

  for (int x, i = 0; i < n; i++) {
    scanf("%d", &x);
    printf("%d ", x);
  }

  return 0;
}