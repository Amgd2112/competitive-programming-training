#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int min_refills(int d, int m, int n, int stops[]) {
  int refills = 0;
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

  if (remaining < d - stops[n - 1]) refills++;
  return refills;
}

int main() {
  IOS;
  // FIO;

  int d, m, n;
  scanf("%d\n%d\n%d\n", &d, &m, &n);
  int stops[n];
  for (int &stop : stops) scanf("%d", &stop);

  int refills = min_refills(d, m, n, stops);
  printf("%d\n", refills);

  return 0;
}