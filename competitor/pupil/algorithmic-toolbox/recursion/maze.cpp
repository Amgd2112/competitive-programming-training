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
int dirs[][2] = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};

bool is_reachable(const int &n, const int &m, int i, int j) {
  bool valid = i < n && i > -1 && j < m && j > -1;
  if (!valid || VIS[i][j] || MAZE[i][j] == 'x') {
    return false;
  }

  bool reachable = MAZE[i][j] == 'e';
  VIS[i][j] = true;

  // search for end if it does not exist in the current position
  int k = 0;
  while (!reachable && k < 4) {
    reachable |= is_reachable(n, m, i + dirs[k][0], j + dirs[k][1]);
    k++;
  }

  VIS[i][j] = false;
  return reachable;
}

int main(int argc, char const *argv[]) {
  IOS;
  FIO;

  int n, m;
  scanf("%d%d", &n, &m);
  int q, p;
  scanf("%d%d ", &q, &p);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%c ", &MAZE[i][j]);
    }
  }

  bool reachable = is_reachable(n, m, q, p);
  printf("%s\n", (reachable) ? "TRUE" : "FALSE");

  return 0;
}