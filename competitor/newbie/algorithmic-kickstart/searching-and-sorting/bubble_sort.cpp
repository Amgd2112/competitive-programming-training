#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

void bubble_sort(int a[], int begin, int end) {
  while (end > begin) {
    for (int i = begin; i < end - 1; i++) {
      if (a[i] > a[i + 1]) {
        swap(a[i], a[i + 1]);
      }
    }
    end--;
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

  bubble_sort(a, begin, end);
  for (int ai : a) printf("%d ", ai);

  return 0;
}