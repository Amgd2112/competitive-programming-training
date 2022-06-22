#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

void sortColors(vector<int> &nums) {
  map<int, int> colors;
  for (const int &num : nums) {
    colors[num]++;
  }

  int begin = 0;
  for (const auto &it : colors) {
    for (int j = begin; j < begin + it.second; j++) {
      nums[j] = it.first;
    }
    begin += it.second;
  }

  return;
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  vector<int> nums(n);
  for (int &num : nums) scanf("%d", &num);
  sortColors(nums);
  for (int &num : nums) printf("%d ", num);

  return 0;
}