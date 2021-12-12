#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  freopen("output.txt", "w", stdout);

#define N 1000
#define M 200000

typedef long long ll;

ll maximum_revenue(int a[], int b[], int n) {
  sort(a, a + n);
  sort(b, b + n);
  ll revenue = 0;
  for (int i = 0; i < n; i++) revenue += ll(a[i]) * b[i];
  return revenue;
}

int main() {
  IOS;
  // FIO;

  int t = N;
  while (t--) {
    int n = rand() % N + 1;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++) {
      a[i] = rand() % M;
      b[i] = rand() % M;
    }

    ll revenue = maximum_revenue(a, b, n);
    printf("%lld\n", revenue);
  }

  return 0;
}