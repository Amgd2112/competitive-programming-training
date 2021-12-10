#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

typedef unsigned long long llu;

llu fibonacci(int n) {
  if (n <= 1) return n;
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
  IOS;
  // FIO;

  int n;
  scanf("%d\n", &n);

  llu fib = fibonacci_naive(n);
  printf("%llu\n", fib);

  return 0;
}