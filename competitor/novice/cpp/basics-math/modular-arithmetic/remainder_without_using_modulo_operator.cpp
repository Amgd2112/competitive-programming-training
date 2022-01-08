#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int reminder(int a, int n) {
  /* Modular arithmetic
   * When one number is divided by another, the modulo operation finds the
   * remainder.
   *
   * a modulo n = reminder of a over n. It is denoted by the % symbol.
   * r = a % n = a - n * floor(a/n)
   * r = 197 - 9 * floor(197 / 9) = 8
   */
  return a - n * (a / n);
}

int main(int argc, char const *argv[]) {
  IOS;
  FIO;

  int num = 2947;
  printf("%d\n", num % 5);
  printf("%d\n", reminder(num, 5));

  return 0;
}
