#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int reverse(int x) {
  if (x == INT_MAX || x == INT_MIN) return 0;

  bool neg = false;
  if (x < 0) {
    x *= -1;
    neg = true;
  }

  string nums = to_string(x);
  int n = nums.size() - 1;
  for (int i = 0; i <= n / 2; i++) swap(nums[i], nums[n - i]);

  try {
    x = stoi(nums);
  } catch (out_of_range& e) {
    x = 0;
  }

  return neg ? x * -1 : x;
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  int x;
  scanf("%d", &x);
  printf("%d\n", reverse(x));

  return 0;
}