#include <bits/stdc++.h>
using namespace std;

int height[61];

int main() {
  for (int current_height = 0, i = 0; i <= 60; i++)
    height[i] = (i % 2 == 0) ? ++current_height : (current_height *= 2);

  int test_cases;
  scanf("%d", &test_cases);
  while (test_cases--) {
    int n;
    scanf("%d", &n);
    printf("%d\n", height[n]);
  }

  return 0;
}