#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

long long minimum_candies(int a[], int n) {
  int candies[n];
  candies[0] = 1;
  for (int i = 1; i < n; i++) {
    candies[i] = (a[i] > a[i - 1]) ? candies[i - 1] + 1 : 1;
  }

  for (int i = n - 2; i > -1; i--) {
    if (a[i] > a[i + 1] && candies[i] <= candies[i + 1]) {
      candies[i] = candies[i + 1] + 1;
    }
  }

  return accumulate(candies, candies + n, 0LL);
}

int main() {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  int a[n];
  for (int &ai : a) scanf("%d", &ai);
  long long candies = minimum_candies(a, n);
  printf("%lld\n", candies);

  return 0;
}