#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

long long a_very_big_sum(const long long a[], const int &n) {
  long long sum = 0;
  for (int i = 0; i < n; i++) {
    sum += a[i];
  }
  return sum;
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  long long a[n];
  for (const long long &ai : a) scanf("%lld", &ai);
  printf("%lld\n", a_very_big_sum(a, n));

  return 0;
}