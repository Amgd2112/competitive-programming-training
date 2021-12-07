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
  unordered_set<int> bad_cars;

  int a = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &a);
      if (a == -1 || a == 0)
        continue;
      else if (a == 1)
        bad_cars.insert(i + 1);
      else if (a == 2)
        bad_cars.insert(j + 1);
      else {
        bad_cars.insert(i + 1);
        bad_cars.insert(j + 1);
      }
    }
  }

  printf("%d\n", n - bad_cars.size());
  for (int i = 0; i < n; i++) {
    if (find(bad_cars.begin(), bad_cars.end(), i + 1) != bad_cars.end())
      continue;
    printf("%d ", i + 1);
  }

  return 0;
}