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

  int w;
  scanf("%d\n", &w);
  if (w > 2 && w % 2 == 0 && (w - 2) % 2 == 0)
    printf("YES\n");
  else
    printf("NO\n");

  return 0;
}