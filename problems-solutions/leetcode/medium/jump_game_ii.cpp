#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int jump(vector<int>& nums) {
  int last = nums.size() - 1, j = 0;
  while (last != 0) {
    int longest = last;
    for (int i = last - 1; i >= 0; i--) {
      if (last <= nums[i] + i) {
        longest = i;
      }
    }
    last = longest;
    j++;
  }
  return j;
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  vector<int> nums(n);
  for (const int& num : nums) scanf("%d", &num);
  printf("%d ", jump(nums));

  return 0;
}