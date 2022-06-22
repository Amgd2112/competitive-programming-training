#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int closestReachableIndex(vector<int> &nums, int i, int j) {
  if (j < 0 || i - j <= nums[j]) {
    return j;
  }
  return closestReachableIndex(nums, i, j - 1);
}

bool canJump(vector<int> &nums) {
  int x = nums.size() - 1;

  while (x > 0) {
    x = closestReachableIndex(nums, x, x - 1);
  }

  return x == 0;
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  vector<int> nums(n);
  for (const int &num : nums) scanf("%d", &num);
  printf("%d\n", canJump(nums));

  return 0;
}