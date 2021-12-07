#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int main() {
  IOS;
  //   FIO;

  int n;
  scanf("%d\n", &n);
  int a1, a2, a3;
  while (scanf("%d %d %d\n", &a1, &a2, &a3), n--) {
    printf("%d\n", (a1 + a2 + a3) % 3 != 0);
  }

  return 0;
}