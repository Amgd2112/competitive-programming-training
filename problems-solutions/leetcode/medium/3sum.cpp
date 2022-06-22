#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

struct Item {
  int v1, v2, v3;
  Item() {}
  Item(int v1 = 0, int v2 = 0, int v3 = 0) {
    this->v1 = v1;
    this->v2 = v2;
    this->v3 = v3;
  }

  bool operator==(const Item& item) const {
    return (v1 == item.v1) && (v2 == item.v2) && (v3 == item.v3);
  }

  struct HashFunction {
    size_t operator()(const Item& item) const {
      size_t v1_hash = std::hash<int>()(item.v1);
      size_t v2_hash = std::hash<int>()(item.v2) << 1;
      size_t v3_hash = std::hash<int>()(item.v3) << 1;
      return v1_hash ^ v2_hash ^ v3_hash;
    }
  };
};

vector<vector<int>> threeSum(vector<int>& nums) {
  sort(nums.begin(), nums.end());
  unordered_set<Item, Item::HashFunction> us;
  unordered_map<int, bool> visit;
  int i = 0, j, k, n = nums.size() - 2, sum;
  while (i < n) {
    if (!visit[nums[i]]) {
      j = i + 1, k = n + 1;
      while (k > j) {
        sum = nums[i] + nums[j] + nums[k];
        if (sum > 0) {
          k--;
        } else if (sum < 0) {
          j++;
        } else {
          vector<int> a = {nums[i], nums[j], nums[k]};
          sort(a.begin(), a.end());
          us.insert(Item(a[0], a[1], a[2]));
          j++;
        }
      }
    }
    visit[nums[i]] = true;
    i++;
  }

  vector<vector<int>> m = {};
  for (const Item& item : us) {
    m.push_back(vector<int>{item.v1, item.v2, item.v3});
  }
  return m;
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  vector<int> nums(n);
  for (const int& num : nums) scanf("%d", &num);
  vector<vector<int>> res = threeSum(nums);
  for (const vector<int>& row : res) {
    printf("%d %d %d\n", row[0], row[1], row[2]);
  }

  return 0;
}