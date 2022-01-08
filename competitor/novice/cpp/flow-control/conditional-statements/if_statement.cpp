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

  int n, m;
  scanf("%d %d", &n, &m);

  // TODO:  x => minimum between x, n, m

  int x = INT_MAX;

  if (n < x) {
    x = n;  // x = 290
  }

  if (m < x) {
    x = m;  // x = 129
  }

  printf("X: %d\n", x);

  return 0;
}