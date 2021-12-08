#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int main() {
  IOS;
  // FIO;

  int n1, n2;
  scanf("%d %d\n", &n1, &n2);
  printf("%d\n", n1 + n2);

  return 0;
}