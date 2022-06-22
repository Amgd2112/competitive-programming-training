#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int minimumIdx(vector<int>& nums, int i, int j) {
  if (nums[i] > nums[j]) return j;
  return i;
}

int rotatedBinarySearch(vector<int>& nums, int low, int high) {
  if (low > high) return 0;

  int mid = low + (high - low) / 2, left, right, idx;
  if (nums[mid] < nums[high]) {
    idx = rotatedBinarySearch(nums, low, mid - 1);
    return minimumIdx(nums, mid, idx);
  } else if (nums[mid] > nums[low]) {
    idx = rotatedBinarySearch(nums, mid + 1, high);
    return minimumIdx(nums, low, idx);
  } else if (nums[mid] == nums[high]) {
    left = rotatedBinarySearch(nums, low, mid - 1);
    right = rotatedBinarySearch(nums, mid + 1, high - 1);
    idx = minimumIdx(nums, left, right);
    return minimumIdx(nums, mid, idx);
  } else {
    left = rotatedBinarySearch(nums, low + 1, mid - 1);
    right = rotatedBinarySearch(nums, mid + 1, high);
    idx = minimumIdx(nums, left, right);
    return minimumIdx(nums, low, idx);
  }
}

int findMin(vector<int>& nums) {
  int idx = rotatedBinarySearch(nums, 0, nums.size() - 1);
  return nums[idx];
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  vector<int> nums(n);
  for (const int& num : nums) scanf("%d", &num);
  printf("%d\n", findMin(nums));

  return 0;
}