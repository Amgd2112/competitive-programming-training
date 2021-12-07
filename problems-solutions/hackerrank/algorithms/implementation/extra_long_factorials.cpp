#include <bits/stdc++.h>
using namespace std;

#define MAX_SIZE 200

vector<int> extra_long_factorials(int n) {
  vector<int> big_number(MAX_SIZE);
  big_number[0] = 1;
  int digit_size = 1;

  for (int x = 1; x <= n; x++) {
    int carry = 0;
    for (int i = 0; i < digit_size; i++) {
      int prod = big_number[i] * x + carry;
      big_number[i] = prod % 10;
      carry = prod / 10;
    }

    while (carry) {
      big_number[digit_size] = carry % 10;
      carry = carry / 10;
      digit_size += 1;
    }
  }

  reverse(big_number.begin(), big_number.begin() + digit_size);
  return vector<int>(big_number.begin(), big_number.begin() + digit_size);
}

int main() {
  int n;
  scanf("%d", &n);
  vector<int> big_number = extra_long_factorials(n);
  for (int digit : big_number) printf("%d", digit);

  return 0;
}
