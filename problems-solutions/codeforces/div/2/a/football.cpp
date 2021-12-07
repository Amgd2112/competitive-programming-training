#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

bool compare(pair<string, int> p1, pair<string, int> p2) {
  return p1.second < p2.second;
}

int main() {
  IOS;
  //   FIO;

  int n;
  cin >> n;
  cin.get();

  unordered_map<string, int> scores;
  string team = "";
  while (getline(cin, team), n--) scores[team]++;
  string winner = max_element(scores.begin(), scores.end(), compare)->first;
  printf("%s\n", winner.c_str());

  return 0;
}