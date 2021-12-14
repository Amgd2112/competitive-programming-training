#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int linear_search(int a[], int n, int key) {
  for (int i = 0; i < n; i++) {
    if (a[i] == key) return i;
  }
  return -1;
}

int main() {
  IOS;
  // FIO;

  int n = 12;
  int a[] = {-32, 29, 1, 2, 2, 5, 3, 2, 8, 328, -10, -121};

  printf("%d\n", linear_search(a, n, 3));
  printf("%d\n", linear_search(a, n, 30));

  return 0;
}