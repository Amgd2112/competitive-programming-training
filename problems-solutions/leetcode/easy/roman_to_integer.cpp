#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

unordered_map<string, int> symbols = {
    {"I", 1},   {"V", 5},    {"X", 10},   {"L", 50}, {"C", 100},
    {"D", 500}, {"M", 1000}, {"IV", 4},   {"IX", 9}, {"XL", 40},
    {"XC", 90}, {"CD", 400}, {"CM", 900},
};

int romanToInt(string s) {
  int ans = 0, i = 0;
  string key;

  while (i < s.size()) {
    key = s[i];
    if ((i < s.size() - 1) && (symbols.find(key + s[i + 1]) != symbols.end())) {
      key += s[i + 1];
    }

    ans += symbols[key];
    i += key.size();
  }
  return ans;
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  string s;
  getline(cin, s);
  printf("%d\n", romanToInt(s));

  return 0;
}
