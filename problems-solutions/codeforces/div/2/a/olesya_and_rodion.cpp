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

  int n, t;
  scanf("%d%d", &n, &t);

  string ans = "-1";
  if (n >= floor(log10(t)) + 1) {
    string num = "";
    if (t == 10) {
      for (int i = 0; i < n / 2; i++) num += to_string(t);
      if (n % 2 != 0) num += "0";
    } else {
      while (n--) num += to_string(t);
    }

    ans = num;
  }
  printf("%s\n", ans.c_str());

  return 0;
}