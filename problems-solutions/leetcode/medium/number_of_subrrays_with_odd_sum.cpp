#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

#define N 1e9 + 7

int numOfSubarrays(const vector<int>& a) {
  int even = 1, odd = 0, acc;

  for (const int& ai : a) {
    acc = (acc + ai) & 1;
    if (acc)
      odd++;
    else
      even++;
  }

  return ((long long)even * odd) % N;
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  vector<int> a(n);
  for (const int& ai : a) scanf("%d", &ai);

  printf("%d\n", numOfSubarrays(a));

  return 0;
}