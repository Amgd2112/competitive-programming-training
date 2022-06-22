#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int lengthOfLIS(vector<int>& nums) {
  int length = 1;
  vector<int> mem(nums.size(), 1);
  for (int i = 0; i < nums.size() - 1; i++) {
    for (int j = i + 1; j < nums.size(); j++) {
      if (nums[i] < nums[j]) {
        mem[j] = max(mem[j], mem[i] + 1);
        length = max(mem[j], length);
      }
    }
  }
  return length;
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  vector<int> nums(n);
  for (const int& num : nums) scanf("%d", &num);
  printf("%d\n", lengthOfLIS(nums));

  return 0;
}