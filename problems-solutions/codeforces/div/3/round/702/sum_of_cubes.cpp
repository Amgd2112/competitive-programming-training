#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

bool is_sum_of_cubes(const long long x) {
  long long a = 1, b = 1e4, s;
  while (a <= b) {
    s = a * a * a + b * b * b;
    if (x == s) {
      return true;
    } else if (x < s) {
      b--;
    } else {
      a++;
    }
  }
  return false;
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int t;
  scanf("%d", &t);

  long long x;
  while (t--) {
    scanf("%lld", &x);
    printf("%s\n", is_sum_of_cubes(x) ? "YES" : "NO");
  }

  return 0;
}