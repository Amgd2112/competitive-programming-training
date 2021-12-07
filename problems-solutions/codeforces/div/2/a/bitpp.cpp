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

  int n;
  cin >> n;
  cin.get();

  int x = 0;
  string opr;
  while (n--) {
    getline(cin, opr);
    if (opr[0] == '+' || opr[2] == '+')
      x++;
    else
      x--;
  }

  cout << x << endl;

  return 0;
}