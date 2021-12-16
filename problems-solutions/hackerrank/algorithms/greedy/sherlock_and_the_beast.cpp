#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

string decent_number(int n) {
  int j = -1, i = 0, x;
  while (j == -1 && i < n) {
    x = n - 5 * i;
    if (x > -1 && x % 3 == 0) j = i;
    i++;
  }

  string number = "-1";
  if (j != -1) {
    number = "";
    int three = j * 5, five = n - three;
    while (five--) number += '5';
    while (three--) number += '3';
  }
  return number;
}

int main() {
  IOS;
  // FIO;

  int t, n;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    printf("%s\n", decent_number(n).c_str());
  }

  return 0;
}