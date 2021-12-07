#include <bits/stdc++.h>
using namespace std;

int find_digits(int n) {
  int count = 0;
  int rem, digits = n;

  while (digits) {
    rem = digits % 10;
    digits /= 10;
    if (rem == 0 || n % rem != 0) continue;
    count += 1;
  }

  return count;
}

int main() {
  int test_cases;
  scanf("%d", &test_cases);
  while (test_cases--) {
    int n;
    scanf("%d", &n);
    printf("%d\n", find_digits(n));
  }

  return 0;
}