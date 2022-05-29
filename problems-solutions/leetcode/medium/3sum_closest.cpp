#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int threeSumClosest(vector<int>& nums, int target) {
  sort(nums.begin(), nums.end());
  int i = 0, j, k, sum, closest = 1e4;
  while (i < nums.size() - 2) {
    j = i + 1, k = nums.size() - 1;
    while (k > j) {
      sum = nums[i] + nums[j] + nums[k];
      if (abs(target - closest) > abs(target - sum)) {
        closest = sum;
      }

      if (sum == target) {
        return sum;
      } else if (sum > target) {
        k--;
      } else {
        j++;
      }
    }
    i++;
  }
  return closest;
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  int n, k;
  scanf("%d%d", &n, &k);
  vector<int> nums(n);
  for (const int& num : nums) scanf("%d", &num);
  printf("%d\n", threeSumClosest(nums, k));

  return 0;
}