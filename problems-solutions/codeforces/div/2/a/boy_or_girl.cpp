#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

unordered_map<int, string> OUTPUT = {{0, "IGNORE HIM!"}, {1, "CHAT WITH HER!"}};

bool boy_or_girl(string username) {
  set<char> s;
  for (char c : username) s.insert(c);
  return s.size() % 2 == 0;
}

int main() {
  IOS;
  //   FIO;

  string username;
  getline(cin, username);
  cout << OUTPUT[boy_or_girl(username)] << endl;

  return 0;
}