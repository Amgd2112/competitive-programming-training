#include <bits/stdc++.h>
using namespace std;

int squares(int a, int b) { return floor(sqrt(b)) - ceil(sqrt(a)) + 1; }

int main() {
  int test_cases;
  scanf("%d", &test_cases);
  while (test_cases--) {
    int a, b;
    scanf("%d %d", &a, &b);
    int result = squares(a, b);
    printf("%d\n", result);
  }

  return 0;
}