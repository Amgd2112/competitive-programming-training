#include <bits/stdc++.h>
using namespace std;
#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

unordered_map<int, string> OUTPUT = {
    {1, "YES"},
    {0, "NO"},
};

bool should_build_oven(int n, int t, int k, int d) {
  int tn = ceil(n / (double)k) * t;
  int ti = 0, cakes = 0;
  while (cakes < n) {
    ti++;
    if (ti % t == 0) cakes += k;
    if (ti - d > 0 && (ti - d) % t == 0) cakes += k;
  }

  return ti < tn;
}

int main() {
  IOS;
  //   FIO;

  int n, t, k, d;
  scanf("%d %d %d %d\n", &n, &t, &k, &d);
  cout << OUTPUT[should_build_oven(n, t, k, d)] << endl;

  return 0;
}