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

  char x[18];
  scanf("%s", &x);

  int n = sizeof(x) / sizeof(x[0]), i = 0;
  if (x[0] == '9') i = 1;
  for (; i < n; i++) x[i] = min(x[i], (char)('0' + ('9' - x[i])));
  printf("%s\n", x);

  return 0;
}