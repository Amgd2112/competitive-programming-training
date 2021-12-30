// Generate all sequence of given length (0/1)

#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

void generate_binaries(int n, string s = "") {
  if (n < 1) {
    cout << s << endl;
    return;
  }
  generate_binaries(n - 1, s + '0');
  generate_binaries(n - 1, s + '1');
}

int main() {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  generate_binaries(n);

  return 0;
}