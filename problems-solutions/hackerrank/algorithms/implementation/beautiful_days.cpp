#include <bits/stdc++.h>
using namespace std;

int reverse_number(int n) {
  int reversed_number = 0, remainder;
  while (n != 0) {
    remainder = n % 10;
    reversed_number = reversed_number * 10 + remainder;
    n /= 10;
  }
  return reversed_number;
}

int beautiful_days(int i, int j, int k) {
  int beautiful = 0;
  for (int start = i; start <= j; start++) {
    if ((start - reverse_number(start)) % k == 0) beautiful++;
  }
  return beautiful;
}

int main() {
  int i, j, k;
  scanf("%d %d %d", &i, &j, &k);
  int beautiful = beautiful_days(i, j, k);
  printf("%d\n", beautiful);

  return 0;
}