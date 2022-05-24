#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

string longestCommonPrefix(vector<string>& strs) {
  string ans = "";
  bool exit = false;
  char c;
  int i = 0, j = 0;
  while (!exit && i < strs[0].size()) {
    c = strs[0][i];

    j = 1;
    while (!exit && j < strs.size()) {
      if (strs[j].size() <= i || strs[j][i] != c) {
        exit = true;
      }
      j++;
    }

    if (j == strs.size() && !exit) {
      ans += c;
    } else {
      exit = true;
    }

    i++;
  }
  return ans;
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  string str;
  vector<string> strs;
  while (getline(cin, str)) strs.push_back(str);
  cout << longestCommonPrefix(strs) << '\n';

  return 0;
}