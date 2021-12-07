#include <bits/stdc++.h>
using namespace std;

int rectangular_surface_area(int l, int w, int h) {
  return 2 * (l * w + l * h + w * h);
}

int complex_surface_area(vector<vector<int>> a, int h, int w) {
  int area = 0;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      area += rectangular_surface_area(a[i][j], 1, 1);
      if (i + 1 < h) area -= 2 * min(a[i][j], a[i + 1][j]);
      if (j + 1 < w) area -= 2 * min(a[i][j], a[i][j + 1]);
    }
  }
  return area;
}

int main() {
  int h, w;
  scanf("%d %d\n", &h, &w);
  vector<vector<int>> a(h, vector<int>(w, 0));
  for (vector<int> &ai : a)
    for (int &aj : ai) scanf("%d", &aj);
  printf("%d\n", complex_surface_area(a, h, w));

  return 0;
}