#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

#define N 500
#define M 500

char MAZE[N][M];
bool VIS[N][M];
int dirs[][2] = {{-1, 0}, {0, -1}, {1, 0}, {0, 1}};

bool connected_components(const int &n, const int &m, int i, int j) {
  bool valid = i < n && i > -1 && j < m && j > -1;
  if (!valid || MAZE[i][j] == 'x' || VIS[i][j]) return false;

  VIS[i][j] = true;
  // visit all connected components reachable from the current position
  for (int k = 0; k < 4; k++) {
    connected_components(n, m, i + dirs[k][0], j + dirs[k][1]);
  }
  return true;
}

int number_of_components(const int &n, const int &m) {
  int c = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      c += connected_components(n, m, i, j);
    }
  }
  return c;
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int n, m;
  scanf("%d%d ", &n, &m);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%c ", &MAZE[i][j]);
    }
  }

  int components = number_of_components(n, m);
  printf("%d\n", components);

  return 0;
}