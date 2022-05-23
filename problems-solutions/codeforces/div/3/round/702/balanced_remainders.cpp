#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int balanced_remainders(int a[], const int n) {
  int b, m, i = m = b = 0, k = n / 3;
  while (i < 3) a[i++] -= k;

  i = 0;
  while (b != 3) {
    if (a[i] == 0) {
      b++;  // already balanced
    } else if (a[i] > 0) {
      m += a[i];               // move
      a[(i + 1) % 3] += a[i];  // append to next element
      a[i] = 0;                // make it balanced
    }
    i = (i + 1) % 3;
  }

  return m;
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int t;
  scanf("%d", &t);

  int n, m, a[3] = {0};
  while (t-- != 0) {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
      scanf("%d", &m);
      a[m % 3]++;
    }
    printf("%d\n", balanced_remainders(a, n));
  }

  return 0;
}