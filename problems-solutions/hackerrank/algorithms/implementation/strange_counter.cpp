#include <bits/stdc++.h>
using namespace std;

long long count(long long n) {
  long long gn, time = 1;
  int i = 1;
  while (i++) {
    gn = 3 * (long long)pow(2, i - 2);  // gn = g1 * r^(n-1)
    if (n >= time && n < time + gn) return time + gn - n;
    time += gn;
  }

  return 0;
}

int main() {
  long long time;
  scanf("%lld\n", &time);
  printf("%lld\n", count(time));

  return 0;
}
