#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

vector<int> decompressRLElist(vector<int>& nums) {
  vector<int> ans;
  for (int i = 0; i < nums.size(); i += 2) {
    int freq = nums[i], val = nums[i + 1];
    while (freq--) ans.push_back(val);
  }
  return ans;
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  vector<int> nums(n);
  for (const int& num : nums) scanf("%d", &num);
  for (const int& ans : decompressRLElist(nums)) printf("%d ", ans);

  return 0;
}