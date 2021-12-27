#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int search(int a[], int key, int n) {
  int low = 0, high = n - 1, mid, first = -1;

  while (low <= high) {
    mid = low + (high - low) / 2;
    if (a[mid] == key) {
      first = mid;
      high = mid - 1;
    } else if (a[mid] > key) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }

  return first;
}

int main() {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  int a[n];
  for (int &ai : a) scanf("%d", &ai);
  int m, k;
  scanf("%d", &m);
  while (m--) {
    scanf("%d", &k);
    printf("%d ", search(a, k, n));
  }

  return 0;
}