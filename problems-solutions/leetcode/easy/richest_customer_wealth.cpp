#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int maximumWealth(vector<vector<int>>& accounts) {
  int max_wealth = 0, wealth = 0;
  for (const vector<int>& accout : accounts) {
    wealth = 0;
    for (const int& money : accout) {
      wealth += money;
    }
    max_wealth = max(max_wealth, wealth);
  }
  return max_wealth;
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  int n, m;
  scanf("%d%d", &n, &m);
  vector<vector<int>> grid(n, vector<int>(m, 0));
  for (const vector<int>& row : grid) {
    for (const int& num : row) {
      scanf("%d", &num);
    }
  }

  printf("%d\n", maximumWealth(grid));

  return 0;
}