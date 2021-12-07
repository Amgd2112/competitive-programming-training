#include <bits/stdc++.h>
using namespace std;

int save_the_prisoner(int prisoners, int sweets, int starting_chair) {
  return 1 + (starting_chair - 1 + sweets - 1) % prisoners;
}

int main() {
  int test_cases;
  scanf("%d", &test_cases);
  while (test_cases--) {
    int n, m, s;
    scanf("%d %d %d", &n, &m, &s);
    int chair = save_the_prisoner(n, m, s);
    printf("%d\n", chair);
  }

  return 0;
}