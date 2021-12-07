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

  int n, m;
  scanf("%d %d\n", &n, &m);
  string output = "#Black&White";
  char c;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%c ", &c);
      if (c == 'C' || c == 'M' || c == 'Y') {
        output = "#Color";
        break;
      }
    }
  }

  printf("%s\n", output.c_str());
  return 0;
}