#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
  vector<int> counts(101), acc(101), ans(nums.size());
  for (const int& num : nums) {
    counts[num]++;
    acc[num]++;
  }
  for (int i = 1; i < 101; i++) acc[i] += acc[i - 1];
  for (int i = 0; i < nums.size(); i++) ans[i] = acc[nums[i]] - counts[nums[i]];
  return ans;
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);

  vector<int> a(n);
  for (const int& ai : a) scanf("%d", &ai);

  vector<int> ans = smallerNumbersThanCurrent(a);
  for (const int& ai : ans) printf("%d ", ai);

  return 0;
}