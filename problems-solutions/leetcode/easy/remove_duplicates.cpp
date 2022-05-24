#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int removeDuplicates(vector<int> &nums) {
  int c = 0, i = 0, j = 0;

  while (i < nums.size()) {
    while (i + 1 < nums.size() && nums[i] == nums[i + 1]) {
      i++;
    }

    swap(nums[i++], nums[j++]);
    c++;
  }
  return c;
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  vector<int> a(n);
  for (const int &ai : a) scanf("%d", &ai);
  int l = removeDuplicates(a);
  for (int i = 0; i < l; i++) printf("%d ", a[i]);

  return 0;
}