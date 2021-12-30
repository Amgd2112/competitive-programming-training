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

int flood_fill(const int &n, const int &m, int i = 0, int j = 0) {
  bool valid = i < n && i > -1 && j < m && j > -1;
  if (!valid || VIS[i][j] || MAZE[i][j] == 'x') return 0;

  int c = 1, k = -1;
  VIS[i][j] = true;
  while (++k < 4) {
    c += flood_fill(n, m, i + dirs[k][0], j + dirs[k][1]);
  }
  return c;
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int n, m;
  scanf("%d%d", &n, &m);
  int q, p;
  scanf("%d%d ", &q, &p);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%c ", &MAZE[i][j]);
    }
  }

  int r = flood_fill(n, m, q, p);
  printf("%d\n", r);

  return 0;
}