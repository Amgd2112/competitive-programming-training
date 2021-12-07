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
  scanf("%d\n", &n);

  int a[n];
  bool vis[n] = {0};

  int t = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d ", &a[i]);
    if (a[i] % 2 == 0) {
      a[i] /= 2;
      vis[i] = 1;
    } else {
      a[i] = round(a[i] / 2.0);
    }

    t += a[i];
  }

  for (int i = 0; i < n; i++) {
    if (t == 0) break;
    if (!vis[i]) {
      if (t < 0 && a[i] < 0) {
        a[i]++;
        t++;
      }

      if (t > 0 && a[i] > 0) {
        a[i]--;
        t--;
      }
    }
  }

  for (int &ai : a) printf("%d\n", ai);

  return 0;
}
