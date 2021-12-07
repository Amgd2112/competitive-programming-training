#include <bits/stdc++.h>
using namespace std;

string cat_and_mouse(int x, int y, int z) {
  int da = abs(x - z), db = abs(y - z);

  if (da == db)
    return "Mouse C";
  else if (da < db)
    return "Cat A";
  else
    return "Cat B";
}

int main() {
  int test_cases;
  scanf("%d", &test_cases);
  while (test_cases--) {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    printf("%s\n", cat_and_mouse(x, y, z).c_str());
  }

  return 0;
}