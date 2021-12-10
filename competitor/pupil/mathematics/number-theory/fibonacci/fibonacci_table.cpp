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

  llu fibonacci_table[n + 1];
  fibonacci_table[0] = 0;
  fibonacci_table[1] = 1;
  for (int i = 2; i <= n; i++)
    fibonacci_table[i] = fibonacci_table[i - 1] + fibonacci_table[i - 2];
  return fibonacci_table[n];
}

int main() {
  IOS;
  // FIO;

  int n;
  scanf("%d\n", &n);
  llu fib = fibonacci(n);
  printf("%llu\n", fib);

  return 0;
}