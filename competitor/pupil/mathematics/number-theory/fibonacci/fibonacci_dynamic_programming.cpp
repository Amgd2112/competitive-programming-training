#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

typedef unsigned long long llu;

vector<llu> fibonacci_sequence;
llu fibonacci(int n) {
  if (n <= 1) return n;

  if (fibonacci_sequence[n] == -1)
    fibonacci_sequence[n] = fibonacci(n - 1) + fibonacci(n - 2);

  return fibonacci_sequence[n];
}

int main() {
  IOS;
  // FIO;

  int n;
  scanf("%d\n", &n);
  fibonacci_sequence = vector<llu>(n + 1, -1);
  fibonacci_sequence[0] = 0;
  fibonacci_sequence[1] = 1;

  llu fib = fibonacci(n);
  printf("%llu\n", fib);
  // for (int i = 0; i <= n; i++) printf("%llu ", fibonacci_sequence[i]);

  return 0;
}