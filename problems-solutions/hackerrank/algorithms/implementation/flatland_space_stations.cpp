#include <bits/stdc++.h>
using namespace std;

int flatland_space_stations(vector<int> space_stations, int cities) {
  int max_distance = INT_MIN, min_distance, distance;
  for (int city = 0; city < cities; city++) {
    min_distance = INT_MAX;
    for (int station : space_stations) {
      distance = abs(station - city);
      if (distance < min_distance) min_distance = distance;
    }
    if (min_distance > max_distance) max_distance = min_distance;
  }
  return max_distance;
}

int main() {
  int n, m;
  scanf("%d %d\n", &n, &m);
  vector<int> space_stations(m);
  for (int &station : space_stations) scanf("%d ", &station);
  int max_distance = flatland_space_stations(space_stations, n);
  printf("%d\n", max_distance);

  return 0;
}