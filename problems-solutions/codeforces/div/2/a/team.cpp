#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int implemented_problems(vector<vector<int>> problems) {
  int c = 0;
  for (vector<int> problem : problems)
    if (problem[0] + problem[1] + problem[2] >= 2) c++;
  return c;
}

int main() {
  IOS;
  //   FIO;

  int n;
  scanf("%d\n", &n);
  vector<vector<int>> problems(n, vector<int>(3, 0));
  for (vector<int> &problem : problems)
    for (int &is_sure : problem) scanf("%d", &is_sure);
  int ip = implemented_problems(problems);
  printf("%d\n", ip);

  return 0;
}