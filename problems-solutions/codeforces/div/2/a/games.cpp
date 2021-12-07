#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int games(vector<vector<int>> teams) {
  int g = 0;
  for (vector<int> team : teams) {
    for (vector<int> other_team : teams) {
      if (team[0] == other_team[1]) g++;
    }
  }
  return g;
}

int main() {
  IOS;
  //   FIO;

  int n;
  scanf("%d\n", &n);
  vector<vector<int>> teams(n, vector<int>(2, 0));
  for (vector<int> &team : teams)
    for (int &color : team) scanf("%d", &color);

  printf("%d\n", games(teams));

  return 0;
}