#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

bool isValidSudoku(vector<vector<char>>& board) {
  unordered_map<int, unordered_set<int>> um_row, um_col, um_sub_boxes;
  for (int r = 0; r < board.size(); r += 3) {
    for (int c = 0; c < board.size(); c += 3) {
      int b = r * 32 | c ^ 16;
      for (int i = r; i < r + 3; i++) {
        for (int j = c; j < c + 3; j++) {
          if (board[i][j] == '.') continue;

          int x = board[i][j];
          bool in_row = um_row[i].find(x) != um_row[i].end();
          bool in_col = um_col[j].find(x) != um_col[j].end();
          bool in_sub_box = um_sub_boxes[b].find(x) != um_sub_boxes[b].end();

          if (in_row || in_col || in_sub_box) {
            return false;
          }

          um_row[i].insert(x);
          um_col[j].insert(x);
          um_sub_boxes[b].insert(x);
        }
      }
    }
  }
  return true;
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  int n = 9;
  vector<vector<char>> board(n, vector<char>(n, '.'));
  for (vector<char>& row : board) {
    for (const char& cell : row) {
      scanf("%c", &cell);
    }
  }

  printf("%d\n", isValidSudoku(board));
  return 0;
}