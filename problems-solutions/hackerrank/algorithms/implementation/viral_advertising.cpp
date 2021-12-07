#include <bits/stdc++.h>
using namespace std;

int viral_advertising(int days, int shared) {
  int liked, cumulative = 0;
  for (int day = 1; day <= days; ++day) {
    liked = shared / 2;
    cumulative += liked;
    shared = 3 * liked;
  }

  return cumulative;
}

int main() {
  int days;
  scanf("%d", &days);
  int cumulative = viral_advertising(days, 5);
  printf("%d\n", cumulative);

  return 0;
}