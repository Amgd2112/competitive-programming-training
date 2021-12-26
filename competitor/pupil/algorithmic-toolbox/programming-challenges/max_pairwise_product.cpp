#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

long long max_pairwise_product(vector<int> a) {
  make_heap(a.begin(), a.end());
  int max1 = a.front();
  pop_heap(a.begin(), a.end());
  a.pop_back();
  int max2 = a.front();
  return (long long)max1 * max2;
}

int main() {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  vector<int> a(n);
  for (int &ai : a) scanf("%d", &ai);
  printf("%lld\n", max_pairwise_product(a));

  return 0;
}