#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

enum Direction {
  TOP,
  BOTTOM,
  RIGHT,
  LEFT,
  TOP_RIGHT,
  TOP_LEFT,
  BOTTOM_RIGHT,
  BOTTOM_LEFT
};

struct Move {
  int r, c;
  Move(const int& _r, const int& _c) {
    r = _r;
    c = _c;
  }
};

Move map_direction_to_move(const int& direction) {
  /* moving in a specific direction in an array in any of 8 directions
   * -1, -1        -1, 0       -1, 1
   *  0, -1        [r, c]       0, 1
   *  1, -1         1, 0        1, 1
   */
  if (direction == TOP)
    return Move(-1, 0);
  else if (direction == BOTTOM)
    return Move(1, 0);
  else if (direction == RIGHT)
    return Move(0, 1);
  else if (direction == LEFT)
    return Move(0, -1);
  else if (direction == TOP_LEFT)
    return Move(-1, -1);
  else if (direction == TOP_RIGHT)
    return Move(-1, 1);
  else if (direction == BOTTOM_LEFT)
    return Move(1, -1);
  else
    return Move(1, 1);
}

int main(int argc, char const* argv[]) {
  IOS;
  FIO;

  Move m = map_direction_to_move(TOP);
  printf("%d %d\n", m.r, m.c);

  return 0;
}