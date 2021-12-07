#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int get_weight(int a, int b) {
  int year = 0;
  while (a <= b) {
    a *= 3;
    b *= 2;
    year++;
  }
  return year;
}

int main() {
  IOS;
  //   FIO;

  int a, b;
  scanf("%d %d\n", &a, &b);
  int years = get_weight(a, b);
  printf("%d\n", years);
  return 0;
}