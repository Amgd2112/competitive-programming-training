#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int maxArea(vector<int>& height) {
  int low = 0, high = height.size() - 1, max_area = 0, area = 0;
  while (low < high) {
    area = (high - low) * min(height[low], height[high]);
    max_area = max(max_area, area);

    if (height[low] < height[high]) {
      low++;
    } else {
      high--;
    }
  }

  return max_area;
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);

  vector<int> h(n);
  for (const int& hi : h) scanf("%d", &hi);
  printf("%d\n", maxArea(h));

  return 0;
}