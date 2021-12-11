#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("output.txt", "w", stdout);

#define N 5
#define M 400
#define T 300

int min_refills(int m, int n, int stops[]) {
  int refills = 0;

  int remaining = m;
  int distance;
  for (int i = 0; i < n - 1; i++) {
    // current and next stop
    distance = stops[i + 1] - stops[i];
    assert(distance <= m);

    if (distance <= remaining) {
      remaining -= distance;
      continue;
    }

    refills++;
    remaining = m - distance;
  }

  return refills;
}

int minRefills(int x[], int n, int L) {
  int numRefills = 0, currentRefill = 1;
  while (currentRefill < n) {
    int lastRefill = currentRefill - 1;
    while (currentRefill < n && x[currentRefill] - x[lastRefill] <= L) {
      currentRefill++;
    }
    assert(currentRefill != lastRefill);
    if (currentRefill < n) numRefills++;
  }
  return numRefills;
}

int main() {
  IOS;
  FIO;

  int t = T;
  while (t--) {
    int n = rand() % N + 2;
    int l = rand() % M + 1;
    int x[n] = {0};
    for (int i = 1; i < n; i++) x[i] = rand() % l + x[i - 1];
    for (const int &xi : x) printf("%d ", xi);
    printf("\n");

    int r1 = minRefills(x, n, l);
    int r2 = min_refills(l, n, x);
    if (r1 == r2) continue;
    printf("Wrong Answer: %d, %d != %d\n", l, r1, r2);
    break;
  }

  return 0;
}