#include <bits/stdc++.h>
using namespace std;
#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

int main() {
  IOS;

  int n;
  scanf("%d\n", &n);
  pair<int, int> p, q;
  while (n--) {
    scanf("%d%d%d%d", &p.first, &p.second, &q.first, &q.second);
    printf("%d %d\n", 2 * q.first - p.first, 2 * q.second - p.second);
  }

  return 0;
}