#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

vector<int> shuffle(vector<int>& nums, int n) {
  vector<int> res(nums.size());
  for (int i = 0, x = 0; i < n; i++, x += 2) res[x] = nums[i];
  for (int i = n, y = 1; i < 2 * n; i++, y += 2) res[y] = nums[i];
  return res;
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);

  vector<int> nums(n);
  for (const int& num : nums) scanf("%d", &num);
  for (const int& num : shuffle(nums, n / 2)) printf("%d ", num);

  return 0;
}