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
  cin >> n;
  cin.get();
  string footprint;
  getline(cin, footprint);

  int ll, lr, fl, fr = fl = lr = ll = -1;
  for (int i = 0; i < n; i++) {
    if (footprint[i] == 'R') {
      fr = i;
      while (footprint[i] == 'R') i++;
      lr = i;
    }

    if (footprint[i] == 'L') {
      fl = i;
      while (footprint[i] == 'L') i++;
      ll = i;
    }
  }

  int s, t = s = 0;
  if (fl == -1) {
    s = fr + 1;
    t = lr + 1;
  } else if (fr == -1) {
    s = ll;
    t = fl;
  } else {
    if ((lr - fr) >= (ll - fl)) {
      s = fr + 1;
      t = fl;

    } else {
      s = ll;
      t = lr + 1;
    }
  }

  printf("%d %d\n", s, t);

  return 0;
}