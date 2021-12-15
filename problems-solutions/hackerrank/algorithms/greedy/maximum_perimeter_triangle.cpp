#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

bool is_trianlge(const long long &a, const long long &b, const long long &c) {
  return a + b > c && a + c > b && b + c > a;
}

int maximum_perimeter_triangle(int a[], int &n) {
  sort(a, a + n, [](const int &a, const int &b) { return a > b; });
  for (int i = 2; i < n; i++) {
    if (is_trianlge(a[i], a[i - 1], a[i - 2])) {
      return i;
    }
  }

  return -1;
}

int main() {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  int a[n];
  for (int &ai : a) scanf("%d", &ai);

  int idx = maximum_perimeter_triangle(a, n);
  if (idx == -1)
    printf("%d\n", idx);
  else
    printf("%d %d %d\n", a[idx], a[idx - 1], a[idx - 2]);

  return 0;
}