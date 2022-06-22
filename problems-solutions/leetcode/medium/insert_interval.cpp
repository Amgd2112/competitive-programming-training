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

vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
  int i = 0;
  vector<vector<int>> ans;
  while (i < intervals.size() && intervals[i][1] < newInterval[0] && !isIntersect(intervals[i], newInterval)) {
    ans.push_back(intervals[i++]);
  }

  while ((i < intervals.size()) && isIntersect(intervals[i], newInterval)) {
    newInterval[0] = min(newInterval[0], intervals[i][0]);
    newInterval[1] = max(newInterval[1], intervals[i][1]);
    i++;
  }
  ans.push_back(newInterval);

  while (i < intervals.size()) ans.push_back(intervals[i++]);

  return ans;
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  return 0;
}