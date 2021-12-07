#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int main() {
  IOS;
  // FIO;

  string s;
  getline(cin, s);  // n
  getline(cin, s);  // s

  bool is_pangram = true;
  int chars = 26;

  unordered_set<char> letters;
  for (char c : s) letters.insert(tolower(c));
  if (letters.size() < chars) is_pangram = false;

  printf("%s\n", is_pangram ? "YES" : "NO");

  return 0;
}