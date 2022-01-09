#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

void plus_minus(const int a[], const int &n) {
  int ps = 0, ng = 0, zr = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] < 0) {
      ng++;
    } else if (a[i] > 0) {
      ps++;
    } else {
      zr++;
    }
  }

  printf("%0.6lf\n%0.6lf\n%0.6lf\n", (double)ps / n, (double)ng / n,
         (double)zr / n);

  return;
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  int a[n];
  for (const int &ai : a) scanf("%d", &ai);
  plus_minus(a, n);

  return 0;
}