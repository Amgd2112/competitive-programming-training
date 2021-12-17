#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

bool two_arrays(int a[], int b[], const int &n, const int &k) {
  sort(a, a + n);
  sort(b, b + n, greater<int>());
  int i = 0;
  while (i < n && a[i] + b[i] >= k) i++;
  if (i == n) return true;
  return false;
}

int main() {
  IOS;
  // FIO;

  int q, n, k;
  scanf("%d", &q);
  while (q--) {
    scanf("%d%d", &n, &k);
    int a[n];
    for (int &ai : a) scanf("%d", &ai);
    int b[n];
    for (int &bi : b) scanf("%d", &bi);
    printf("%s\n", two_arrays(a, b, n, k) ? "YES" : "NO");
  }

  return 0;
}