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
  scanf("%d %d", &n, &k);
  vector<pair<int, int>> days(n);

  int i = 0;
  while (i < n) {
    scanf("%d", &days[i].first);
    days[i].second = ++i;
  }

  sort(days.begin(), days.end());

  vector<int> indices;
  for (auto &day : days) {
    if (day.first > k) break;
    k -= day.first;
    indices.push_back(day.second);
  }

  printf("%d\n", indices.size());
  for (int index : indices) printf("%d ", index);

  return 0;
}