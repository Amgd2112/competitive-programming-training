#include <bits/stdc++.h>
using namespace std;

int hurdleRace(int k, vector<int> heights) {
  make_heap(heights.begin(), heights.end());
  return (heights.front() - k > 0) ? heights.front() - k : 0;
}

int main() {
  int n, k;
  scanf("%d %d", &n, &k);
  vector<int> heights(n);
  for (int &height : heights) scanf("%d", &height);
  printf("%d\n", hurdleRace(k, heights));

  return 0;
}