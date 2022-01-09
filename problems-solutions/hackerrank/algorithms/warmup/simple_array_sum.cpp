#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int array_sum(const int a[], const int &n) {
  int t = 0;
  for (int i = 0; i < n; i++) {
    t += a[i];
  }
  return t;
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  int a[n];
  for (const int &ai : a) scanf("%d", &ai);

  printf("%d\n", array_sum(a, n));

  return 0;
}