#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int minimum_wait_time(double a, double b, double c) {
  return ceil((a * c) / b) - c;
}

int main() {
  IOS;
  //   FIO;

  int a, b, c;
  scanf("%d %d %d\n", &a, &b, &c);
  printf("%d", minimum_wait_time(a, b, c));

  return 0;
}