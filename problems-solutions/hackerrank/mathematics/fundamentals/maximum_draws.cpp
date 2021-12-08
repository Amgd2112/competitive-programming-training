#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

int main() {
  IOS;

  int n, t;
  scanf("%d", &t);
  while (scanf("%d", &n), t--) {
    printf("%d\n", n + 1);
  }

  return 0;
}