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

  int n;
  scanf("%d", &n);
  int p[n];

  unordered_map<int, int> um;
  for (int i = 1; i <= n; i++) {
    scanf("%d", &p[i - 1]);
    um[p[i - 1]] = i;
  }

  for (int pi : p) printf("%d ", um[um[pi]]);

  return 0;
}