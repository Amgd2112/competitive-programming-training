#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

typedef long long ll;

ll max_revenue(int a[], int b[], int n) {
  sort(a, a + n);
  sort(b, b + n);
  ll revenue = 0;
  for (int i = 0; i < n; i++) revenue += ll(a[i]) * b[i];
  return revenue;
}

int main() {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  int a[n];
  for (int &ai : a) scanf("%d", &ai);
  int b[n];
  for (int &bi : b) scanf("%d", &bi);

  ll revenue = max_revenue(a, b, n);
  printf("%lld\n", revenue);

  return 0;
}