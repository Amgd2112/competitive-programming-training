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

  int n;
  scanf("%d\n", &n);

  int x = -1;
  unordered_map<int, int> counts;
  for (int ai, i = 0; i < n; i++) {
    scanf("%d ", &ai);
    counts[ai]++;
    x = max(counts[ai], x);
  }
  printf("%s\n", ((x * 2) - 1 > n) ? "NO" : "YES");

  return 0;
}