#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int main(int argc, char const *argv[]) {
  IOS;
  FIO;

  int n;
  scanf("%d", &n);

  unordered_set<int> us;
  for (int e, x, i = 0; i < n; i++) {
    scanf("%d %d", &e, &x);
    us.insert(e);
    us.insert(x);
  }

  for (const auto &usi : us) printf("%d ", usi);

  return 0;
}
