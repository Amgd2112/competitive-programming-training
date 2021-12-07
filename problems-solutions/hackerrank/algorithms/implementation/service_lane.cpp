#include <bits/stdc++.h>
using namespace std;

int get_maximum_vehicle_width(int width[], int start, int end) {
  int min_width = INT_MAX;
  for (int i = start; i <= end; i++)
    if (width[i] < min_width) min_width = width[i];

  return min_width;
}

int main() {
  int n, t;
  scanf("%d %d\n", &n, &t);
  int width[n];
  for (int &w : width) scanf("%d ", &w);
  while (t--) {
    int i, j;
    scanf("%d %d\n", &i, &j);
    int res = get_maximum_vehicle_width(width, i, j);
    printf("%d\n", res);
  }

  return 0;
}