#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

#define N 100000

int super_digit(int &n) {
  if (n < 10) return n;
  int s = 0;
  while (n) {
    s += n % 10;
    n /= 10;
  }
  return super_digit(s);
}

int repeated_super_digit(const char digits[], const int &k) {
  int s = 0, i = 0;
  while (digits[i] != '\0') s += digits[i++] - '0';
  int p = super_digit(s) * k;
  return super_digit(p);
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  char n[N];
  scanf("%[^' ']", n);

  int k;
  scanf("%d", &k);

  int digit = repeated_super_digit(n, k);
  printf("%d\n", digit);

  return 0;
}