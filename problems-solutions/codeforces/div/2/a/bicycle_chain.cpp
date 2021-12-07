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
  scanf("%d", &n);
  int a[n];
  for (int &ai : a) scanf("%d", &ai);

  int m;
  scanf("%d", &m);
  int b[m];
  for (int &bi : b) scanf("%d", &bi);

  int max_ratio = 0, no_max_ratio = 0, ratio = 0;
  for (int ai : a) {
    for (int bi : b) {
      if (bi % ai != 0) continue;

      ratio = bi / ai;
      if (ratio == max_ratio) no_max_ratio++;

      if (ratio > max_ratio) {
        ratio = bi / ai;
        max_ratio = ratio;
        no_max_ratio = 1;
      }
    }
  }

  printf("%d\n", no_max_ratio);

  return 0;
}