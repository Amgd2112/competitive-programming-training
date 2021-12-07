#include <bits/stdc++.h>
using namespace std;

int how_many_games(int p, int d, int m, int s) {
  int games = 0;
  while (p <= s) {
    games++;
    s -= p;
    p = max(m, p - d);
  }
  return games;
}

int main() {
  int p, d, m, s;
  scanf("%d %d %d %d\n", &p, &d, &m, &s);

  int games = how_many_games(p, d, m, s);
  printf("%d\n", games);

  return 0;
}