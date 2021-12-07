#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

vector<vector<int>> olympiad_teams(vector<int> children) {
  vector<vector<pair<int, int>>> subjects(3);
  for (int i = 0; i < children.size(); i++)
    subjects[children[i] - 1].push_back(make_pair(children[i], i + 1));

  int t = INT_MAX;
  for (int i = 0; i < 3; i++) t = min((int)subjects[i].size(), t);

  vector<vector<int>> teams(t, vector<int>(3, 0));
  for (int i = 0; i < t; i++) {
    for (int j = 0; j < 3; j++) {
      teams[i][j] = subjects[j][i].second;
    }
  }

  return teams;
}

int main() {
  IOS;
  //   FIO;

  int n;
  scanf("%d\n", &n);
  vector<int> children(n);
  for (int &child : children) scanf("%d", &child);

  vector<vector<int>> teams = olympiad_teams(children);
  printf("%d\n", teams.size());
  for (vector<int> team : teams) {
    for (int mem : team) printf("%d ", mem);
    printf("\n");
  }

  return 0;
}