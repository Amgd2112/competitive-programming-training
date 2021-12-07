#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

bool is_prime(int n) {
  if (n <= 1) return false;
  if (n == 2 || n == 3) return true;
  if (n % 2 == 0 || n % 3 == 0) return false;

  for (int i = 5; i * i <= n; i += 2)
    if (n % i == 0) return false;

  return true;
}

int main() {
  IOS;
  // FIO;

  int n, m;
  scanf("%d%d", &n, &m);

  int p = 0;
  for (int i = n + 1; i <= m; i++) {
    if (is_prime(i)) {
      p = i;
      break;
    }
  }
  printf("%s\n", (p == m) ? "YES" : "NO");

  return 0;
}