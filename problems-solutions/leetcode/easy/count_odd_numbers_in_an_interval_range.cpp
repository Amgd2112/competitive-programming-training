#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int countOdds(const int& low, const int& high) {
  int range = high - low;
  return range / 2 + ((low & 1) || (high & 1));
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  int n, m;
  scanf("%d %d", &n, &m);
  printf("%d\n", countOdds(n, m));

  return 0;
}