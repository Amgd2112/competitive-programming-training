#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int min_number_operations(const vector<int> &a) {
  int c = 0, m = a[0];
  for (int i = 1; i < a.size(); i++) {
    if (a[i] > a[i - 1]) c += a[i] - a[i - 1];
    m = min(m, a[i]);
  }

  if (a[0] > m) m += a[0] - m;
  return c + m;
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  vector<int> a(n);
  for (const int &ai : a) scanf("%d", &ai);

  printf("%d\n", min_number_operations(a));

  return 0;
}