#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int toys(int w[], int &n) {
  sort(w, w + n);
  int i = 0, c = 0, init;
  while (i < n) {
    init = w[i];
    while (i < n && w[i + 1] <= init + 4) i++;
    c++;
    i++;
  }
  return c;
}

int main() {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  int w[n];
  for (int &wi : w) scanf("%d", &wi);
  printf("%d\n", toys(w, n));

  return 0;
}