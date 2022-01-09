#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

typedef pair<int, int> pii;

typedef struct Point {
  int x, y;
  Point(const int& _x, const int& _y) {
    x = _x;
    y = _y;
  }
} point;

int main(int argc, char const* argv[]) {
  IOS;
  FIO;

  pii p = pii(1, 2);
  printf("%d %d\n", p.first, p.second);

  point p1 = point(1, 2);
  printf("%d %d\n", p1.x, p1.y);

  return 0;
}