#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

vector<int> runningSum(vector<int> &nums) {
  int s = 0;
  for (int &num : nums) {
    s += num;
    num = s;
  }
  return nums;
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);

  vector<int> a(n);
  for (const int &ai : a) scanf("%d", &ai);

  vector<int> ans = runningSum(a);
  for (const int &ai : ans) printf("%d ", ai);

  return 0;
}