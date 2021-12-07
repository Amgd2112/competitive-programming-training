#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int manhattan_distance(int x1, int y1, int x2, int y2) {
  return abs(x2 - x1) + abs(y2 - y1);
}

int main() {
  IOS;
  //   FIO;

  for (int i = 0, n; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      scanf("%d", &n);
      if (n) {
        // the minimum number of moves = manhattan distance between 1-point and
        // (2, 2)
        printf("%d\n", manhattan_distance(i, j, 2, 2));
        break;
      }
    }
  }

  return 0;
}