#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int main() {
  IOS;
  FIO;

  int t;
  scanf("%d", &t);
  int a;
  while (t--) {
    scanf("%d", &a);
    printf("%s\n", (360 % (180 - a) == 0) ? "YES" : "NO");
  }

  return 0;
}