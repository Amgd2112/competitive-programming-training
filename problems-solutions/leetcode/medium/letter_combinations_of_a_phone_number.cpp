#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

vector<string> letterCombinations(string digits) {
  vector<string> res;
  unordered_map<char, vector<string>> um = {
      {'2', {"a", "b", "c"}}, {'3', {"d", "e", "f"}},
      {'4', {"g", "h", "i"}}, {'5', {"j", "k", "l"}},
      {'6', {"m", "n", "o"}}, {'7', {"p", "q", "r", "s"}},
      {'8', {"t", "u", "v"}}, {'9', {"w", "x", "y", "z"}},
  };

  res = um[digits[0]];
  for (int i = 1; i < digits.size(); i++) {
    res = createCombinations(res, um[digits[i]]);
  }
  return res;
}

vector<string> createCombinations(vector<string> &s1, vector<string> &s2) {
  vector<string> s3;
  for (string w1 : s1) {
    for (string w2 : s2) {
      s3.push_back(w1 + w2);
    }
  }
  return s3;
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  string digits;
  getline(cin, digits);
  vector<string> res = letterCombinations(digits);
  for (string s : res) printf("%s ", s.c_str());

  return 0;
}