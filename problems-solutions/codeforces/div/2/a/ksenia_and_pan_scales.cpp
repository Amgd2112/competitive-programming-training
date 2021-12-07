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

  string l, r, w;
  getline(cin, l, '|');
  getline(cin, r);
  getline(cin, w);

  bool p = true;
  int ls = l.size(), rs = r.size(), ws = w.size();
  if (((ls + rs + ws) % 2 != 0) || (rs > ls + ws) || (ls > rs + ws)) {
    p = false;
  } else {
    int s = (rs + ls + ws) / 2;
    r += w.substr(0, s - rs);
    l += w.substr(s - rs, s - ls);
  }

  if (p) {
    printf("%s|%s\n", l.c_str(), r.c_str());
  } else {
    printf("%s\n", "Impossible");
  }

  return 0;
}