#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
  vector<int> target(0);
  for (int i = 0; i < nums.size(); i++) {
    target.insert(target.begin() + index[i], nums[i]);
  }
  return target;
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  vector<int> nums(n), index(n);
  for (const int& num : nums) scanf("%d", &num);
  for (const int& idx : index) scanf("%d", &idx);
  for (const int& val : createTargetArray(nums, index)) printf("%d ", val);

  return 0;
}