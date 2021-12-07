#include <bits/stdc++.h>
using namespace std;

set<int> follow_the_trail(int n, int a, int b) {
  set<int> stones;
  for (int i = 0; i < n / 2 + 1; i++) {
    stones.insert(i * a + (n - i - 1) * b);
    stones.insert(i * b + (n - i - 1) * a);
  }
  return stones;
}

int main() {
  int test_cases;
  scanf("%d\n", &test_cases);
  while (test_cases--) {
    int n, a, b;
    scanf("%d\n%d\n%d\n", &n, &a, &b);
    set<int> stones = follow_the_trail(n, a, b);
    for (auto it = stones.begin(); it != stones.end(); ++it) printf("%d ", *it);
    printf("\n");
  }

  return 0;
}