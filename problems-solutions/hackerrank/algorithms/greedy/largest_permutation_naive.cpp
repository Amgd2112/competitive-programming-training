#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int max_element(int a[], int begin, int end) {
  int idx = begin;
  for (int i = begin + 1; i < end; i++) {
    if (a[idx] < a[i]) idx = i;
  }
  return idx;
}

void largest_permutation(int a[], const int &n, int &k) {
  int idx, i = 0;
  while (k && i < n) {
    idx = max_element(a, i, n);
    if (idx != i) {
      swap(a[i], a[idx]);
      k--;
    }
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