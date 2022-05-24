#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

bool isValid(string s) {
  bool valid = true;
  vector<char> a;
  for (const char &c : s) {
    if (c == '[' || c == '{' || c == '(') {
      a.push_back(c);
    } else if (c == ']' && !a.empty() && a.back() == '[') {
      a.pop_back();
    } else if (c == '}' && !a.empty() && a.back() == '{') {
      a.pop_back();
    } else if (c == ')' && !a.empty() && a.back() == '(') {
      a.pop_back();
    } else {
      valid = false;
      break;
    }
  }
  return valid && !a.size();
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  string s;
  getline(cin, s);
  printf("%s\n", isValid(s) ? "true" : "false");

  return 0;
}