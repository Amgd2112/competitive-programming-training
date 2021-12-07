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

  int n, k;
  scanf("%d %d\n", &n, &k);

  vector<char> chars(k);
  for (int i = 0; i < k; i++) chars[i] = 'a' + i;

  for (int i = 0; i < n; i++) printf("%c", chars[i % k]);

  return 0;
}