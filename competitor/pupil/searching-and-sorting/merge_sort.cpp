#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

void merge(int a[], int const &left, int const &mid, int const &right) {
  int const n = mid - left + 1;
  int const m = right - mid;

  int *b = new int[n], *c = new int[m];
  for (int i = 0; i < n; i++) b[i] = a[left + i];
  for (int j = 0; j < m; j++) c[j] = a[mid + 1 + j];

  int i = 0, j = 0, k = left;
  while (i < n && j < m) {
    if (b[i] <= c[j]) {
      a[k++] = b[i++];
    } else {
      a[k++] = c[j++];
    }
  }

  while (i < n) a[k++] = b[i++];
  while (j < m) a[k++] = c[j++];
}

void merge_sort(int a[], int const &begin, int const &end) {
  if (begin >= end) return;

  int const mid = begin + (end - begin) / 2;
  merge_sort(a, begin, mid);
  merge_sort(a, mid + 1, end);
  merge(a, begin, mid, end);
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);

  int a[n];
  for (int &ai : a) scanf("%d", &ai);

  merge_sort(a, 0, n - 1);
  for (int ai : a) printf("%d ", ai);

  return 0;
}