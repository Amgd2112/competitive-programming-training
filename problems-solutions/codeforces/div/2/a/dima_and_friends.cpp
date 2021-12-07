#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int main() {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  int arr[n];
  for (int &a : arr) scanf("%d", &a);

  int t = accumulate(arr, arr + n, 0);
  n++;  // add dima
  int cnt = 0;
  // number of ways to hit dima
  for (int i = 1; i < 6; i++) {
    if ((t + i) % n == 1) cnt++;
  }

  printf("%d\n", 5 - cnt);

  return 0;
}