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

  unordered_map<int, int> um;
  for (int key, value, i = 0; i < n; i++) {
    scanf("%d %d", &key, &value);
    um[key] = value;
  }

  for (const auto &item : um) {
    printf("%d: %d\n", item.first, item.second);
  }

  return 0;
}