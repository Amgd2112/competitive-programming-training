#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

string max_number(int a[], int n) {
  sort(a, a + n);
  reverse(a, a + n);
  string number = "";
  for (int i = 0; i < n; i++) number += char('0' + a[i]);
  return number;
}

int main() {
  IOS;
  // FIO;

  int n;
  scanf("%d\n", &n);
  int a[n];
  for (const auto &ai : a) scanf("%d ", &ai);

  string num = max_number(a, n);
  printf("%s\n", num.c_str());

  return 0;
}