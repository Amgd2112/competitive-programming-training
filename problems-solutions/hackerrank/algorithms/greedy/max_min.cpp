#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int minimum_unfairness(int a[], const int &n, const int &k) {
  sort(a, a + n);
  int min_idx = 0, max_idx = k - 1, unfairness = INT_MAX;
  while (max_idx < n) {
    unfairness = min(unfairness, a[max_idx] - a[min_idx]);
    max_idx++;
    min_idx++;
  }
  return unfairness;
}

int main() {
  IOS;
  // FIO;

  int n, k;
  scanf("%d%d", &n, &k);
  int a[n];
  for (int &ai : a) scanf("%d", &ai);

  int unfairness = minimum_unfairness(a, n, k);
  printf("%d\n", unfairness);

  return 0;
}
