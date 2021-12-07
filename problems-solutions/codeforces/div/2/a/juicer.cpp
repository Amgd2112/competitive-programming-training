#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int solve(vector<int> orgs, int b, int d) {
  int w = 0, t = 0;
  for (int org : orgs) {
    if (org > b) continue;

    if (org + t > d) {
      w++;
      t = 0;
    } else {
      t += org;
    }
  }

  return w;
}

int main() {
  IOS;
  //   FIO;

  int n, b, d;

  scanf("%d %d %d\n", &n, &b, &d);
  vector<int> orgs(n);
  for (int &org : orgs) scanf("%d", &org);

  printf("%d\n", solve(orgs, b, d));

  return 0;
}