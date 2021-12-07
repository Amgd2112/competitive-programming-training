#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

string winner_announcement(string players) {
  int a = 0, d = 0;
  for (char winner : players) {
    if (winner == 'D')
      d++;
    else
      a++;
  }

  if (a == d) return "Friendship";
  if (a > d) return "Anton";
  return "Danik";
}

int main() {
  IOS;
  // FIO;

  int n;
  scanf("%d\n", &n);
  string players;
  getline(cin, players);
  printf("%s\n", winner_announcement(players).c_str());
  return 0;
}