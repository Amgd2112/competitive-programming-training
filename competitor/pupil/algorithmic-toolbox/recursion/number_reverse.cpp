#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

void reverse_number(const int &n) {
  if (n == 0) return;
  printf("%d", n % 10);
  reverse_number(n / 10);
}

int main() {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  reverse_number(n);

  return 0;
}