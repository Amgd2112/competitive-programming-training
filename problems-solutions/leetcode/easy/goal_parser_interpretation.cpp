#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

string interpret(string command) {
  string ans = "";
  int i = 0;
  while (i < command.size()) {
    if (command[i] == '(') {
      if (command[i + 1] == ')') {
        ans += 'o';
        i += 2;
      } else {
        ans += "al";
        i += 4;
      }
    } else {
      ans += command[i++];
    }
  }
  return ans;
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  string command;
  getline(cin, command);
  printf("%s\n", interpret(command).c_str());

  return 0;
}