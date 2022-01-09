#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int main(int argc, char const *argv[]) {
  IOS;
  FIO;

  int n;
  scanf("%d", &n);

  vector<int> v;

  for (int vi, i = 0; i < n; i++) {
    scanf("%d", &vi);
    v.push_back(vi);
  }

  for (const int &vi : v) printf("%d ", vi);

  return 0;
}