#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int linear_search(const int a[], const int &n, const int &key) {
  for (int i = 0; i < n; i++) {
    if (a[i] == key) {
      return i;
    }
  }
  return -1;
}

int bi_directional_search(const int a[], const int &n, const int &key) {
  for (int i = 0, j = n - 1; i <= j; i++, j--) {
    if (a[i] == key) return i;
    if (a[j] == key) return j;
  }
  return -1;
}

int main(int argc, char const *argv[]) {
  IOS;
  FIO;

  int n;
  scanf("%d", &n);
  int a[n];
  for (const int &ai : a) scanf("%d", &ai);

  printf("%d\n", linear_search(a, n, 3));
  printf("%d\n", bi_directional_search(a, n, 3));

  return 0;
}