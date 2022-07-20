#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int firstOcc(vector<int>& nums, int target, int low, int high, int prev) {
  if (low > high) return prev;
  int mid = low + (high - low) / 2;
  if (nums[mid] == target) {
    return firstOcc(nums, target, low, mid - 1, mid);
  } else if (target < nums[mid]) {
    return firstOcc(nums, target, low, mid - 1, prev);
  } else {
    return firstOcc(nums, target, mid + 1, high, prev);
  }
}

int lastOcc(vector<int>& nums, int target, int low, int high, int prev) {
  if (low > high) return prev;
  int mid = low + (high - low) / 2;
  if (nums[mid] == target) {
    return lastOcc(nums, target, mid + 1, high, mid);
  } else if (target > nums[mid]) {
    return lastOcc(nums, target, mid + 1, high, prev);
  } else {
    return lastOcc(nums, target, low, mid - 1, prev);
  }
}
vector<int> searchRange(vector<int>& nums, int target) {
  int i = firstOcc(nums, target, 0, nums.size() - 1, -1), j = -1;

  if (i != -1) {
    j = lastOcc(nums, target, i, nums.size() - 1, i);
  }

  return vector<int>{i, j};
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  int n, target;
  scanf("%d%d", &n, &target);
  vector<int> nums;
  for (const int& num : nums) scanf("%d", &num);
  vector<int> res = searchRange(nums, target);
  printf("%d %d\n", res[0], res[1]);

  return 0;
}