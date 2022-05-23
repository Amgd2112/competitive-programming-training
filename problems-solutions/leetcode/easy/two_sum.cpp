#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

typedef struct Element {
  int val, idx;

  Element(int const& val = -1, int const& idx = -1) {
    this->val = val;
    this->idx = idx;
  }

  bool operator<(const Element& e) const { return val < e.val; }
} element;

vector<int> twoSum(vector<int>& nums, int target) {
  vector<element> e(nums.size());
  for (int i = 0; i < nums.size(); i++) e[i] = element(nums[i], i);
  sort(e.begin(), e.end());

  int begin = 0, end = e.size() - 1;
  while (e[begin].val + e[end].val != target) {
    if (e[begin].val + e[end].val < target) {
      begin++;
    } else {
      end--;
    }
  }

  return vector<int>{e[begin].idx, e[end].idx};
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  int n, k;
  scanf("%d %d", &n, &k);
  vector<int> a(n);
  for (const int& ai : a) scanf("%d", &ai);
  vector<int> ans = twoSum(a, k);
  printf("%d %d\n", ans[0], ans[1]);

  return 0;
}