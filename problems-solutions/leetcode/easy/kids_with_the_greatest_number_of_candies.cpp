#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
  int max_candy = *max_element(candies.begin(), candies.end());
  vector<bool> res(candies.size());
  for (int i = 0; i < candies.size(); i++) {
    res[i] = candies[i] + extraCandies >= max_candy;
  }
  return res;
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  int n, k;
  scanf("%d%d", &n, &k);

  vector<int> a(n);
  for (const int& ai : a) scanf("%d", &ai);

  vector<bool> ans = kidsWithCandies(a, k);
  for (const int& ai : ans) printf("%d ", ai);

  return 0;
}