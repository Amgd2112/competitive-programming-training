#include <bits/stdc++.h>
using namespace std;

struct square {
  int row, column;
  square(int c = 0, int r = 0) {
    this->row = r;
    this->column = c;
  }

  int chebyshev_distance(square s) {
    return max(abs(s.row - row), abs(s.column - column));
  }

  bool at_right(square s) { return s.row == row && s.column < column; }

  bool at_left(square s) { return s.row == row && s.column > column; }

  bool at_top(square s) { return s.row < row && s.column == column; }

  bool at_bottom(square s) { return s.row > row && s.column == column; }

  bool at_top_left(square s) {
    return s.row - row == -(s.column - column) && s.column > column &&
           s.row < row;
  }

  bool at_top_right(square s) {
    return s.row - row == s.column - column && s.column < column && s.row < row;
  }

  bool at_bottom_left(square s) {
    return s.row - row == s.column - column && s.column > column && s.row > row;
  }

  bool at_bottom_right(square s) {
    return s.row - row == -(s.column - column) && s.column < column &&
           s.row > row;
  }
};

int queens_attack(square qs, vector<square> obstacles, int board_size) {
  int top = board_size - qs.row;
  int bottom = qs.row - 1;
  int right = board_size - qs.column;
  int left = qs.column - 1;
  int top_left = min(top, left);
  int top_right = min(top, right);
  int bottom_left = min(bottom, left);
  int bottom_right = min(bottom, right);

  for (square obstacle : obstacles) {
    int dist = qs.chebyshev_distance(obstacle) - 1;
    if (qs.at_top(obstacle)) bottom = min(bottom, dist);
    if (qs.at_bottom(obstacle)) top = min(top, dist);
    if (qs.at_left(obstacle)) right = min(right, dist);
    if (qs.at_right(obstacle)) left = min(left, dist);

    if (qs.at_top_left(obstacle)) bottom_right = min(bottom_right, dist);
    if (qs.at_bottom_left(obstacle)) top_right = min(top_right, dist);
    if (qs.at_top_right(obstacle)) bottom_left = min(bottom_left, dist);
    if (qs.at_bottom_right(obstacle)) top_left = min(top_left, dist);
  }

  return top + bottom + right + left + top_left + top_right + bottom_left +
         bottom_right;
}

int main() {
  int n, k;
  scanf("%d %d\n", &n, &k);  // n: board size, k: number of obstacles
  square qs;                 // qs: queens square
  scanf("%d %d\n", &qs.row, &qs.column);

  vector<square> obstacles(k);
  for (square &obstacle : obstacles)
    scanf("%d %d\n", &obstacle.row, &obstacle.column);

  int available_square = queens_attack(qs, obstacles, n);
  printf("%d\n", available_square);

  return 0;
}
