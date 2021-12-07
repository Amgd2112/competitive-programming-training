#include <bits/stdc++.h>
using namespace std;

vector<int> climbing_leaderboard(vector<int> ranked, vector<int> player) {
  vector<int> player_rank_after;
  for (int play : player) {
    int pos = upper_bound(ranked.begin(), ranked.end(), play) - ranked.begin();
    player_rank_after.push_back(ranked.size() - pos + 1);
  }
  return player_rank_after;
}

int main() {
  int n;
  scanf("%d", &n);

  // drop duplicate ranks
  set<int> ranked_set;
  for (int rank, i = 0; i < n; ++i) {
    scanf("%d", &rank);
    ranked_set.insert(rank);
  }

  // sorted ranks
  vector<int> ranked(ranked_set.begin(), ranked_set.end());

  int m;
  scanf("%d", &m);
  vector<int> player(m);
  for (int play, i = 0; i < m; ++i) {
    scanf("%d", &play);
    player[i] = play;
  }

  for (int play : climbing_leaderboard(ranked, player)) printf("%d\n", play);

  return 0;
}