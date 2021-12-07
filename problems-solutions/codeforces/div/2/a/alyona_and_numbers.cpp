#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

unordered_map<int, int> divisors_count(int n, int a) {
  int c = n / a;
  unordered_map<int, int> ncounts;
  for (int i = 0; i < a; i++) ncounts[i] = c;             // O(a)
  for (int i = c * a + 1; i <= n; i++) ncounts[i % a]++;  // O(a)

  return ncounts;
}

int main() {
  IOS;
  // FIO;

  int n, m, a = 5;
  scanf("%d%d", &n, &m);

  unordered_map<int, int> ncounts, mcounts;
  ncounts = divisors_count(n, a);
  mcounts = divisors_count(m, a);

  unsigned long long cnt = 0;
  for (int i = 0; i < a; i++) {
    cnt += (unsigned long long)ncounts[i] * mcounts[(a - i) % a];  // O(a)
  }

  printf("%llu\n", cnt);

  return 0;
}