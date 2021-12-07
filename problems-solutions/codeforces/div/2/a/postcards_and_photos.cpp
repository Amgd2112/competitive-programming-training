#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int main() {
  IOS;
  //   FIO;

  string s;
  getline(cin, s);

  const int MAX_CARRY = 5;
  char carry = ' ';
  int visits = 0, count = 0;
  for (char c : s) {
    if (c != carry) {
      visits++;
      carry = c;
      count = 1;
    } else {
      if (count == MAX_CARRY) {
        visits++;
        count = 0;
      }
      count++;
    }
  }

  printf("%d\n", visits);

  return 0;
}