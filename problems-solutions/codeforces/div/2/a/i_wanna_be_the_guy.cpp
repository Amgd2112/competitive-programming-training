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
  scanf("%d", &n);

  unordered_set<int> levels;
  int a, ai;
  for (int i = 0; i < 2; i++) {
    scanf("%d", &a);
    while (a--) {
      scanf("%d", &ai);
      levels.insert(ai);
    }
  }

  string output = "I become the guy.";
  if (levels.size() != n) output = "Oh, my keyboard!";
  printf("%s\n", output.c_str());

  return 0;
}