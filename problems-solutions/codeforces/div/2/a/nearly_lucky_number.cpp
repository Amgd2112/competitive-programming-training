#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int main() {
  IOS;
  // FIO;

  unsigned long long n;
  cin >> n;

  int cnt = 0;
  int digit;
  while (n) {
    digit = n % 10;
    if (digit == 4 || digit == 7) cnt++;
    n /= 10;
  }

  bool is_nearly_lucky = cnt >= 4;

  while (cnt) {
    digit = cnt % 10;
    if (digit == 4 || digit == 7) {
      cnt /= 10;
      continue;
    }

    is_nearly_lucky = false;
    break;
  }

  printf("%s\n", (is_nearly_lucky) ? "YES" : "NO");

  return 0;
}