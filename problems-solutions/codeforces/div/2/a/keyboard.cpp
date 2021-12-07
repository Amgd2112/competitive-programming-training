#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

unordered_map<char, char> keyboard_map(string ignore, int dir) {
  string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
  int n = keyboard.size();
  unordered_map<char, char> um_keyboard;

  char letter;
  bool to_ignore;
  for (int i = 0; i < n; i++) {
    letter = keyboard[i];
    to_ignore = false;
    for (char c : ignore) {
      if (c == letter) to_ignore = true;
      break;
    }
    um_keyboard[letter] = (to_ignore) ? letter : keyboard[i + dir];
  }

  return um_keyboard;
}

int main() {
  IOS;
  // FIO;

  string dir, message;
  getline(cin, dir);
  getline(cin, message);

  unordered_map<char, char> um_keyboard;
  um_keyboard = (dir == "R") ? keyboard_map("qaz", -1) : keyboard_map("p;/", 1);
  for (char letter : message) printf("%c", um_keyboard[letter]);

  return 0;
}