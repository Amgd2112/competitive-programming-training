#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

void generate_ternaries(int n, string s = "") {
  if (n < 1) {
    cout << s << endl;
    return;
  }
  generate_ternaries(n - 1, s + '0');
  generate_ternaries(n - 1, s + '1');
  generate_ternaries(n - 1, s + '2');
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  generate_ternaries(n);

  return 0;
}