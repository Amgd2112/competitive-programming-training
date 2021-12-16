#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int beautiful_pairs(int a[], int b[], int n) {
  sort(a, a + n);
  sort(b, b + n);

  int i = 0, j = 0, c = 0;
  while (i < n && j < n) {
    if (a[i] == b[j]) {
      i++;
      j++;
      c++;
    } else if (a[i] < b[j]) {
      i++;
    } else {
      j++;
    }
  }

  if (c < n) return c + 1;
  return c - 1;
}

int main() {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  int a[n];
  for (int &ai : a) scanf("%d", &ai);
  int b[n];
  for (int &bi : b) scanf("%d", &bi);

  int maximum_pairs = beautiful_pairs(a, b, n);
  printf("%d\n", maximum_pairs);

  return 0;
}