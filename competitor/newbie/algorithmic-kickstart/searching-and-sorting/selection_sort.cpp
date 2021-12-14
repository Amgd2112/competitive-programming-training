#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

void selection_sort(int a[], int begin, int end) {
  int idx;
  while (end > begin) {
    idx = begin;
    for (int i = begin + 1; i < end; i++) {
      if (a[i] < a[idx]) idx = i;
    }
    swap(a[idx], a[begin]);
    begin++;
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

  selection_sort(a, begin, end);
  for (int ai : a) printf("%d ", ai);

  return 0;
}