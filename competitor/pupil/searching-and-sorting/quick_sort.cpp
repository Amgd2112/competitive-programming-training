#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int partition(int a[], const int &low, const int &high) {
  int idx = low;
  for (int i = low + 1; i < high; i++) {
    if (a[i] < a[low]) {
      swap(a[i], a[++idx]);
    }
  }
  swap(a[low], a[idx]);
  return idx;
}

void quick_sort(int a[], const int &low, const int &high) {
  if (low >= high) return;
  int pivot = partition(a, low, high);
  quick_sort(a, low, pivot);
  quick_sort(a, pivot + 1, high);
}

int main() {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);

  int a[n];
  for (int &ai : a) scanf("%d", &ai);

  quick_sort(a, 0, n);
  for (int ai : a) printf("%d ", ai);

  return 0;
}