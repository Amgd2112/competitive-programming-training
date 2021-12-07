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

  string c1, c2;
  getline(cin, c1);
  getline(cin, c2);

  int cnt = 0;
  for (int i = 0; i < n; i++) {
    int n1 = c1[i] - '0', n2 = c2[i] - '0';
    cnt += min(abs(n1 - n2), 10 - abs(n1 - n2));
  }

  printf("%d\n", cnt);

  return 0;
}