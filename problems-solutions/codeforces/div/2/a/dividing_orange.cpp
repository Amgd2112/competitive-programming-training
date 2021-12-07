#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int main() {
  IOS;
  // FIO;

  int n, k;
  scanf("%d%d", &n, &k);

  unordered_set<int> segments;
  for (int i = 1; i <= n * k; i++) segments.insert(i);

  vector<vector<int>> children(k);
  int ai;
  for (int i = 0; i < k; i++) {
    scanf("%d", &ai);
    children[i].push_back(ai);
    segments.erase(ai);
  }

  int d = segments.size() / k;
  int i = 1;
  for (auto &ai : segments) {
    if (i > d * k) break;
    children[i++ % k].push_back(ai);
  }

  for (vector<int> child : children) {
    for (int ai : child) printf("%d ", ai);
    printf("\n");
  }

  return 0;
}