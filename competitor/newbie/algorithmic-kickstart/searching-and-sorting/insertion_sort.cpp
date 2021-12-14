#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

void insertion_sort(int a[], int begin, int end) {
  int idx;
  for (int i = begin; i < end; i++) {
    idx = i;
    while (idx > begin && a[idx - 1] > a[idx]) {
      swap(a[idx - 1], a[idx]);
      idx--;
    }
  }

  return;
}

int main() {
  IOS;
  FIO;

  int n;
  scanf("%d", &n);
  int a[n];
  for (int &ai : a) scanf("%d", &ai);

  int begin, end;
  scanf("%d%d", &begin, &end);

  insertion_sort(a, begin, end);
  for (int ai : a) printf("%d ", ai);

  return 0;
}