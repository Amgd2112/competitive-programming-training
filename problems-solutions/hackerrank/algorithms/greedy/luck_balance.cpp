#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

struct Contest {
  int luck;
  bool is_important;
  Contest(int luck = 0, bool is_important = 0) {
    this->luck = luck;
    this->is_important = is_important;
  }
  bool operator<(Contest c) { return luck > c.luck; }
};

int luck_blanace(Contest c[], int &n, int &k) {
  int luck = 0;
  sort(c, c + n);
  for (int i = 0; i < n; i++) {
    if (k > 0 && c[i].is_important) {
      c[i].is_important = false;
      k--;
    }
    luck += (c[i].is_important) ? -c[i].luck : c[i].luck;
  }

  return luck;
}

int main() {
  IOS;
  // FIO;

  int n, k;
  scanf("%d%d", &n, &k);

  Contest c[n];
  for (Contest &ci : c) scanf("%d%d", &ci.luck, &ci.is_important);

  int luck = luck_blanace(c, n, k);
  printf("%d\n", luck);

  return 0;
}