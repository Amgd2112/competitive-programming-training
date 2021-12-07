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

  string istr;
  getline(cin, istr);
  bool b = false;
  for (char c : istr) {
    if (c == '9' || c == 'Q' || c == 'H') {
      b = true;
      break;
    }
  }

  printf("%s\n", b ? "YES" : "NO");

  return 0;
}