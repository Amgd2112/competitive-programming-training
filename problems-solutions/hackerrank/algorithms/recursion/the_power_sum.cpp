#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int psum(const int &x, const int &n, const int &c = 1) {
  int k = static_cast<int>(x - pow(c, n));
  if (k < 0) return 0;
  if (k == 0) return 1;
  return psum(k, n, c + 1) + psum(x, n, c + 1);
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int x, n;
  scanf("%d%d", &x, &n);
  int p = psum(x, n);
  printf("%d\n", p);

  return 0;
}
