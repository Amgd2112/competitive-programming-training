#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int set_size(string letters) {
  set<char> s;
  for (char letter : letters) {
    if (letter == ',' || letter == '{' || letter == '}' || letter == ' ')
      continue;
    s.insert(letter);
  }

  return s.size();
}

int main() {
  IOS;
  //   FIO;

  string s;
  getline(cin, s);
  printf("%d\n", set_size(s));

  return 0;
}