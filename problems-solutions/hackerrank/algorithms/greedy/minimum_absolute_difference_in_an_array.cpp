#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int minimum_absolute_difference(int a[], int &n) {
  sort(a, a + n);
  int min_diff = INT_MAX, i = 1;
  while (i < n) {
    if (abs(a[i] - a[i - 1]) < min_diff) {
      min_diff = abs(a[i] - a[i - 1]);
    }
    i++;
  }
  return min_diff;
}

int main() {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  int a[n];
  for (int &ai : a) scanf("%d", &ai);
  printf("%d\n", minimum_absolute_difference(a, n));

  return 0;
}