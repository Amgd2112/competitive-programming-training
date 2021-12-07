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
  scanf("%d%d", &n, &m);
  int group, people = 0, buses = 0;
  while (scanf("%d", &group), n--) {
    people += group;
    if (people > m) {
      buses++;
      people = group;
    }
  }

  if (people) buses++;
  printf("%d\n", buses);

  return 0;
}