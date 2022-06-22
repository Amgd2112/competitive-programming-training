#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

bool isIntersect(vector<int>& a, vector<int>& b) {
  return (a[0] >= b[0] && a[0] <= b[1]) || (a[1] >= b[0] && a[1] <= b[1]) ||
         (b[0] >= a[0] && b[0] <= a[1]) || (b[1] >= a[0] && b[1] <= a[1]);
}

static bool sortByFirst(vector<int>& a, vector<int>& b) { return a[0] < b[0]; }

vector<vector<int>> merge(vector<vector<int>>& intervals) {
  int i = 0;
  vector<vector<int>> ans;
  sort(intervals.begin(), intervals.end(), sortByFirst);

  while (i < intervals.size()) {
    while (i + 1 < intervals.size() && isIntersect(intervals[i], intervals[i + 1])) {
      intervals[i + 1][0] = min(intervals[i][0], intervals[i + 1][0]);
      intervals[i + 1][1] = max(intervals[i][1], intervals[i + 1][1]);
      i++;
    }
    ans.push_back(intervals[i++]);
  }

  return ans;
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  return 0;
}