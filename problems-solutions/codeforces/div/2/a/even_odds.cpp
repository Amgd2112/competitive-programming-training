#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

long long an(long long a1, long long n, long long d) {
  return a1 + (n - 1) * d;
}

int main() {
  IOS;
  // FIO;

  long long n, k;
  cin >> n >> k;

  long long even = n / 2;
  long long odd = (n % 2 == 0) ? even : even + 1;

  long long ki = 0;
  ki = (k > odd) ? an(2, k - odd, 2) : an(1, k, 2);
  cout << ki << endl;

  return 0;
}