#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int solve_me_first(const int &a, const int &b) { return a + b; }

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d\n", solve_me_first(a, b));

  return 0;
}