#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int main() {
  IOS;
  //   FIO;

  int n;
  scanf("%d\n", &n);
  vector<int> arr(n);
  for (int &num : arr) scanf("%d", &num);

  sort(arr.begin(), arr.end());
  for (int num : arr) printf("%d ", num);

  return 0;
}