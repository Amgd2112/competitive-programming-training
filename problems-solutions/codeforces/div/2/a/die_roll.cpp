#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

void probability(int y, int w) {
  int denominator = 6;
  int numerator = denominator - max(y, w) + 1;

  if (numerator % 2 == 0) {
    denominator /= 2;
    numerator /= 2;
  }

  if (numerator % 3 == 0) {
    denominator /= 3;
    numerator /= 3;
  }

  printf("%d/%d\n", numerator, denominator);
}

int main() {
  IOS;
  //   FIO;

  int y, w;
  scanf("%d %d\n", &y, &w);
  probability(y, w);

  return 0;
}