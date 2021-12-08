#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

unsigned long long fibonacci_naive(int n) {
  if (n <= 1) return n;
  return fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
}

unsigned long long fibonacci_fast(int n) {
  if (n <= 1) return n;

  unsigned long long a = 0, b = 1;
  for (int i = 0; i < n; i++) {
    swap(a, b);
    a += b;
  }

  return a;
}

vector<unsigned long long> fibonacci_sequence(int n) {
  vector<unsigned long long> fib(n + 1);
  fib[0] = 0;
  fib[1] = 1;
  for (int i = 2; i <= n; i++) fib[i] = fib[i - 1] + fib[i - 2];
  return fib;
}

int main() {
  IOS;
  // FIO;

  int n;
  scanf("%d\n", &n);

  unsigned long long x;

  x = fibonacci_naive(n);
  printf("%llu\n", x);

  x = fibonacci_fast(n);
  printf("%llu\n", x);

  vector<unsigned long long> fib = fibonacci_sequence(n);
  for (unsigned long long fi : fib) printf("%llu ", fi);

  return 0;
}