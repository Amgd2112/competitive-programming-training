#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int removeDuplicates(vector<int>& nums) {
  int i = 0, j = 0, k = 0, c = 0;
  while (j < nums.size()) {
    while (j < nums.size() && nums[i] == nums[j] && c < 2) {
      nums[k++] = nums[j++];
      c++;
    }

    while (j < nums.size() && nums[i] == nums[j]) j++;
    i = j;
    c = 0;
  }

  return k;
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  vector<int> nums(n);
  for (const int& num : nums) scanf("%d", &num);
  int k = removeDuplicates(nums);
  for (int i = 0; i < k; i++) printf("%d ", nums[i]);

  return 0;
}