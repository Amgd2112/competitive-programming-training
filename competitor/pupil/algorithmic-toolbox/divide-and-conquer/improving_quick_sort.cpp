#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

pair<int, int> random_partition(int a[], const int &low, const int &high) {
  int pivot = rand() % (high - low) + low;
  swap(a[pivot], a[low]);

  int i = low + 1, q = low, p = high, c = 0;
  while (i < p) {
    if (a[i] == a[low]) {
      c++;
    } else if (a[i] < a[low]) {
      swap(a[i], a[++q]);
    } else {
      swap(a[i--], a[--p]);
    }
    i++;
  }

  swap(a[low], a[q]);
  for (i = q; i < q + c; i++) a[i] = a[q];
  return make_pair(q, p);
}

void quick_sort(int a[], const int &low, const int &high) {
  if (low >= high) return;
  pair<int, int> p = random_partition(a, low, high);
  quick_sort(a, low, p.first);
  quick_sort(a, p.second, high);
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