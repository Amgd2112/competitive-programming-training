#include <bits/stdc++.h>
using namespace std;

/* Modular arithmetic
 * When one number is divided by another, the modulo operation finds the
 * remainder.
 *
 * a modulo n = reminder of a over n. It is denoted by the % symbol.
 * r = a % n = a - n * floor(a/n)
 */

int reminder(int a, int n) { return a - n * (a / n); }

int main() {
  int num = 2947;
  printf("%d\n", num % 5);
  printf("%d\n", reminder(num, 5));

  return 0;
}

/* output:
 *  2
 *  2
 */