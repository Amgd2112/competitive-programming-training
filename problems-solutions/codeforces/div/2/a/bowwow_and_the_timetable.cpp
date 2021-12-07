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

  string binary;
  getline(cin, binary);

  bool is_root = ((binary.size() % 2 != 0) &&
                  (count(binary.begin(), binary.end(), '1') <= 1));

  printf("%d\n", (int)floor((binary.size() - 1) / 2.0 + !is_root));

  return 0;
}