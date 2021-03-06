#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int numIdenticalPairs(vector<int>& nums) {
  unordered_map<int, int> um;
  int cnt = 0;
  for (const int& num : nums) {
    cnt += um[num];
    um[num]++;
  }
  return cnt;
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  vector<int> nums(n);
  for (const int& num : nums) scanf("%d", &num);
  printf("%d ", numIdenticalPairs(nums));

  return 0;
}