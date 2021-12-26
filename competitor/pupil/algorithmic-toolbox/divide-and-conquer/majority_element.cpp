#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

bool majority_elelment(int a[], const int &n) {
  unordered_map<int, int> m;
  for (int i = 0; i < n; i++) m[a[i]]++;
  for (const auto mi : m) {
    if (mi.second > n / 2) {
      return true;
    }
  }
  return false;
}

int main() {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  int a[n];
  for (int &ai : a) scanf("%d", &ai);
  printf("%d\n", majority_elelment(a, n));

  return 0;
}