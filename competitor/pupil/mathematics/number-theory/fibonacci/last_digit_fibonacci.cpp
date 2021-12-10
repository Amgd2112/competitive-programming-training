#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int last_digit_fibonacci(int n) {
  int a = 0, b = 1;
  while (n--) {
    swap(a, b);
    a = (a + b) % 10;
  }
  return a;
}

int main() {
  IOS;
  // FIO;

  int n;
  scanf("%d\n", &n);
  int x = last_digit_fibonacci(n);
  printf("%d\n", x);

  return 0;
}
