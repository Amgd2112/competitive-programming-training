#include <bits/stdc++.h>
using namespace std;

int eat_free_chocolate(int money, int cost, int wrapper) {
  int bars = money / cost, eating = 0, leaving = 0, earned = bars;
  while (earned) {
    eating += earned;
    leaving = bars % wrapper;
    earned = bars / wrapper;
    bars = leaving + earned;
  }
  return eating;
}

int main() {
  int test_cases;
  scanf("%d\n", &test_cases);
  while (test_cases--) {
    int money, cost, wrapper;
    scanf("%d %d %d\n", &money, &cost, &wrapper);
    int bars = eat_free_chocolate(money, cost, wrapper);
    printf("%d\n", bars);
  }

  return 0;
}