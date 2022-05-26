#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int lengthOfLongestSubstring(string s) {
  int low = 0, high = 0;
  size_t ans = 0;
  unordered_set<char> data;

  while (high < s.size()) {
    while (high < s.size() && data.find(s[high]) == data.end()) {
      data.insert(s[high]);
      high++;
    }

    ans = max(ans, data.size());

    while (low < high && high < s.size() && s[low] != s[high]) {
      data.erase(s[low++]);
    }

    if (s[low] == s[high]) low++;
    high++;
  }

  return ans;
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  string s;
  getline(cin, s);
  printf("%d\n", lengthOfLongestSubstring(s));

  return 0;
}