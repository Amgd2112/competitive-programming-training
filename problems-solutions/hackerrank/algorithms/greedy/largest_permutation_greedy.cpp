#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

void largest_permutation(int a[], const int &n, int &k) {
  map<int, int, greater<int>> e;
  for (int i = 0; i < n; i++) e[a[i]] = i;

  int i = 0;
  int current, idx;
  while (k > 0 && i < n) {
    current = e.begin()->first;
    idx = e.begin()->second;

    if (a[i] < current) {
      swap(e[a[i]], e[a[idx]]);
      swap(a[i], a[idx]);
      k--;
    }

    e.erase(current);
    i++;
  }

  return;
}

int main() {
  IOS;
  // FIO;

  int n, k;
  scanf("%d%d", &n, &k);
  int a[n];
  for (int &ai : a) scanf("%d", &ai);
  largest_permutation(a, n, k);
  for (int &ai : a) printf("%d ", ai);

  return 0;
}