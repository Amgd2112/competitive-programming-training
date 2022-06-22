#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int rotatedBinarySearch(vector<int>& nums, int target, int low, int high) {
  if (low > high) return -1;
  int mid = low + (high - low) / 2;

  if (nums[mid] == target) {
    return mid;
  } else if (nums[mid] < nums[high]) {
    if (nums[mid] < target && target <= nums[high]) {
      return rotatedBinarySearch(nums, target, mid + 1, high);
    } else {
      return rotatedBinarySearch(nums, target, low, mid - 1);
    }
  } else {
    if (nums[low] <= target && target < nums[mid]) {
      return rotatedBinarySearch(nums, target, low, mid - 1);
    } else {
      return rotatedBinarySearch(nums, target, mid + 1, high);
    }
  }
}

int search(vector<int>& nums, int target) {
  return rotatedBinarySearch(nums, target, 0, nums.size() - 1);
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  int n, target;
  scanf("%d%d", &n, &target);
  vector<int> nums(n);
  for (const int& num : nums) scanf("%d", &num);
  for (const int& num : nums) scanf("%d", &num);
  printf("%d\n", search(nums, target));

  return 0;
}