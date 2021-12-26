#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int min_refills(int m, int n, int stops[]) {
  int refills = -1;
  int remaining = stops[0];
  int distance;
  for (int i = 0; i < n - 1; i++) {
    // current and next stop
    distance = stops[i + 1] - stops[i];
    if (distance > m) return -1;

    if (distance <= remaining) {
      remaining -= distance;
      continue;
    }

    refills++;
    remaining = m - distance;
  }

  return refills;
}

int main() {
  IOS;
  // FIO;

  int d, m, n;
  scanf("%d\n%d\n%d\n", &d, &m, &n);
  int stops[n + 2];
  stops[0] = 0;
  stops[n + 1] = d;
  for (int i = 1; i < n + 2; i++) scanf("%d", &stops[i]);
  int refills = min_refills(m, n + 2, stops);
  printf("%d\n", refills);

  return 0;
}