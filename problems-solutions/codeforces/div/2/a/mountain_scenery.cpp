#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

bool is_peak(int y1, int y2, int y3) { return y1 < y2 && y2 > y3; }

int main() {
  IOS;
  // FIO;

  int n, k;
  scanf("%d%d", &n, &k);

  int a[n * 2 + 1] = {0};
  for (int &ai : a) scanf("%d", &ai);

  for (int i = 1; k && i < n * 2; i++) {
    if (is_peak(a[i - 1], a[i] - 1, a[i + 1])) {
      a[i]--;
      k--;
    }
  }

  for (int ai : a) printf("%d ", ai);

  return 0;
}