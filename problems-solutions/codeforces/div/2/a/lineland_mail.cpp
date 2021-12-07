#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int cost(int a, int b) { return abs(a - b); }
int minimum_cost(int a, int b, int c) { return min(cost(a, b), cost(a, c)); }
int maximum_cost(int a, int b, int c) { return max(cost(a, b), cost(a, c)); }

int main() {
  IOS;
  //   FIO;

  int n;
  scanf("%d", &n);
  vector<int> X(n);
  for (int &x : X) scanf("%d", &x);

  printf("%d %d\n", cost(X[0], X[1]), cost(X[0], X[n - 1]));
  for (int i = 1; i < n - 1; i++) {
    printf("%d ", minimum_cost(X[i], X[i + 1], X[i - 1]));
    printf("%d\n", maximum_cost(X[i], X[0], X[n - 1]));
  }
  printf("%d %d\n", cost(X[n - 1], X[n - 2]), cost(X[n - 1], X[0]));

  return 0;
}