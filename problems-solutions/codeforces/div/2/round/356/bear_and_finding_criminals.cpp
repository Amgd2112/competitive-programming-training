#include <bits/stdc++.h>
using namespace std;
#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int finding_criminals(int cities[], int n, int a) {
  int criminals = cities[a];

  int i = 1;
  while (-1 < a - i && a + i < n) {
    if (cities[a + i] && cities[a - i]) criminals += 2;
    i++;
  }

  while (a + i < n) criminals += cities[a + i++];
  while (-1 < a - i) criminals += cities[a - i++];

  return criminals;
}

int main() {
  IOS;
  //   FIO;

  int n, a;
  scanf("%d %d\n", &n, &a);
  int cities[n];
  for (int &city : cities) scanf("%d", &city);
  printf("%d\n", finding_criminals(cities, n, a - 1));

  return 0;
}