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

  int n, m;
  scanf("%d%d", &n, &m);

  int intersections = n * m;
  bool malvika_turn = false;

  while (intersections > 0) {
    intersections -= n + m - 1;
    n--;
    m--;
    malvika_turn = !malvika_turn;
  }

  printf("%s\n", (malvika_turn) ? "Akshat" : "Malvika");

  return 0;
}