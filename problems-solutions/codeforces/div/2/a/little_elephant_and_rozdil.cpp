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
  pair<int, int> min_town = {INT_MAX, 0};
  int no_min_town = 0;
  int town, index = 1;
  while (scanf("%d", &town), n--) {
    if (town == min_town.first) no_min_town++;

    if (town < min_town.first) {
      min_town = make_pair(town, index);
      no_min_town = 1;
    }

    index++;
  }

  if (no_min_town > 1)
    printf("Still Rozdil\n");
  else
    printf("%d\n", min_town.second);

  return 0;
}