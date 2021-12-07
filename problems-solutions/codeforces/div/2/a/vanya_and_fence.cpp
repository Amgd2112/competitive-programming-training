#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int minimum_valid_width(vector<int> heights, int height) {
  int width = 0;
  for (int i = 0; i < heights.size(); i++) {
    if (height >= heights[i])
      width++;
    else
      width += 2;
  }
  return width;
}

int main() {
  IOS;
  //   FIO;
  int n, h;
  scanf("%d %d\n", &n, &h);
  vector<int> heights(n);
  for (int &height : heights) scanf("%d ", &height);
  int minimum_width = minimum_valid_width(heights, h);
  printf("%d\n", minimum_width);
  return 0;
}