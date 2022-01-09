#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int birthday_cake_candles(const int a[], const int &n) {
  int max_element = INT_MIN;
  for (int i = 0; i < n; i++) {
    max_element = max(max_element, a[i]);
  }

  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] == max_element) {
      cnt++;
    }
  }

  return cnt;
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  int a[n];
  for (const int &ai : a) scanf("%d", &ai);

  int cnt = birthday_cake_candles(a, n);
  printf("%d\n", cnt);

  return 0;
}