#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int merge(int a[], int const &left, int const &mid, int const &right) {
  int const n = mid - left + 1;
  int const m = right - mid;

  int *b = new int[n], *c = new int[m];
  for (int i = 0; i < n; i++) b[i] = a[left + i];
  for (int j = 0; j < m; j++) c[j] = a[mid + 1 + j];

  int i = 0, j = 0, k = left, inversions = 0;
  while (i < n && j < m) {
    if (b[i] <= c[j]) {
      a[k++] = b[i++];
    } else {
      inversions += n - i;
      a[k++] = c[j++];
    }
  }

  while (i < n) a[k++] = b[i++];
  while (j < m) a[k++] = c[j++];

  return inversions;
}

int merge_sort(int a[], int const &begin, int const &end) {
  if (begin >= end) return 0;

  int const mid = begin + (end - begin) / 2;
  int inversions = 0;
  inversions += merge_sort(a, begin, mid);
  inversions += merge_sort(a, mid + 1, end);
  inversions += merge(a, begin, mid, end);
  return inversions;
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);

  int a[n];
  for (int &ai : a) scanf("%d", &ai);

  int x = merge_sort(a, 0, n);
  printf("%d\n", x);

  return 0;
}
