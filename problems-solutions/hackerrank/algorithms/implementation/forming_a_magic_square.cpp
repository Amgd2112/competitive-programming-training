#include <bits/stdc++.h>
using namespace std;

const int magic_square_forms[8][3][3] = {
    {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}}, {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
    {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}}, {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},
    {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}}, {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}},
    {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}}, {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}},
};

int forming_magic_square(vector<vector<int>> magic_square) {
  int diff, min_cost = INT_MAX;
  for (int k = 0; k < 8; k++) {
    diff = 0;
    for (int i = 0; i < 3; i++)
      for (int j = 0; j < 3; j++)
        diff += abs(magic_square_forms[k][i][j] - magic_square[i][j]);
    if (diff < min_cost) min_cost = diff;
  }

  return min_cost;
}

int main() {
  vector<vector<int>> magic_square(3, vector<int>(3, 0));
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++) scanf("%d", &magic_square[i][j]);

  int min_cost = forming_magic_square(magic_square);
  printf("%d\n", min_cost);

  return 0;
}
