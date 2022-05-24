#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int removeElement(vector<int> &nums, int val) {
  int i = 0, j = nums.size() - 1;

  while (i <= j) {
    while (i <= j && nums[j] == val) j--;
    if (i <= j && nums[i] == val) swap(nums[i], nums[j]);
    i++;
  }

  return j + 1;
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int n, k;
  scanf("%d%d", &n, &k);
  vector<int> a(n);
  for (const int &ai : a) scanf("%d", &ai);
  int l = removeElement(a, k);
  for (int i = 0; i < l; i++) printf("%d ", a[i]);

  return 0;
}