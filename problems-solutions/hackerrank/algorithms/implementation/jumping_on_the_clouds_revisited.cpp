#include <bits/stdc++.h>
using namespace std;

int jumping_on_clouds(vector<int> clouds, int k) {
  int energy = 100, current_cloud = 0;

  do {
    current_cloud = (current_cloud + k) % clouds.size();
    if (clouds[current_cloud]) energy -= 2;
    energy -= 1;
  } while (current_cloud != 0);

  return energy;
}

int main() {
  int n, k;
  scanf("%d %d", &n, &k);
  vector<int> clouds(n);
  for (int &cloud : clouds) scanf("%d", &cloud);

  int energy = jumping_on_clouds(clouds, k);

  printf("%d\n", energy);
  return 0;
}