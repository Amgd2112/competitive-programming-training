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

  int n;
  scanf("%d", &n);
  int a[n];
  for (int &ai : a) scanf("%d", &ai);
  sort(a, a + n);

  int cf = a[0], cl = a[n - 1], c = 0;
  for (int i = 0; i < n; i++) {
    if (cf != a[i]) break;
    c++;
  }

  if (cf != cl)
    for (int i = n - 1; i > 0; i--) {
      if (cl != a[i]) break;
      c++;
    }

  printf("%d\n", n - c);

  return 0;
}