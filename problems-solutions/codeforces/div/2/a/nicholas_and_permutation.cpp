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

  int max_idx, min_idx, max_value, min_value;
  min_value = INT_MAX;
  max_value = INT_MIN;

  for (int i = 0; i < n; i++) {
    if (min_value > a[i]) {
      min_value = a[i];
      min_idx = i;
    }

    if (max_value < a[i]) {
      max_value = a[i];
      max_idx = i;
    }
  }

  if (min_idx > max_idx) swap(min_idx, max_idx);
  printf("%d\n", max(n - min_idx - 1, max_idx));

  return 0;
}