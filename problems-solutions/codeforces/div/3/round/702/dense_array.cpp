#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int diff(int a, int b) {
  if (a > b) swap(a, b);
  int c = 0;
  while (2 * a < b) {
    a *= 2;
    c++;
  }
  return c;
}

int dense_array(int a[], const int n) {
  int l = 0;
  for (int i = 0; i < n - 1; i++) l += diff(a[i], a[i + 1]);
  return l;
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int t;
  scanf("%d", &t);

  int n, a[50];
  while (t--) {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int l = dense_array(a, n);
    printf("%d\n", l);
  }

  return 0;
}