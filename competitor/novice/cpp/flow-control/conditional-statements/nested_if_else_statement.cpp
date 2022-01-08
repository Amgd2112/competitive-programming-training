#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int main(int argc, char const *argv[]) {
  IOS;
  FIO;

  int n, m, q;
  scanf("%d %d %d", &n, &m, &q);

  if (n > m) {
    printf("%d > %d\n", n, m);
    if (m > q) {
      printf("%d > %d\n", m, q);
    } else {
      printf("%d > %d\n", q, m);
    }
  }

  return 0;
}