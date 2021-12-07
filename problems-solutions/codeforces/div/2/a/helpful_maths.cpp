#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int main() {
  IOS;
  //   FIO;

  string eq;
  getline(cin, eq);
  stringstream s(eq);
  vector<int> nums;

  int num;
  while (s >> num) nums.push_back(num);

  sort(nums.begin(), nums.end());
  int i;
  for (i = 0; i < nums.size() - 1; i++) printf("%d+", nums[i]);

  printf("%d\n", nums[i]);

  return 0;
}