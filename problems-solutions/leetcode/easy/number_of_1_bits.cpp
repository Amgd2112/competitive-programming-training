#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int hammingWeight(uint32_t n) {
  int ones = 0;
  while (n) {
    ones += n & 1;
    n >>= 1;
  }
  return ones;
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  printf("%d\n", hammingWeight(n));

  return 0;
}