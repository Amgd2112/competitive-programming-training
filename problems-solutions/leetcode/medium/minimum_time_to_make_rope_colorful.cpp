#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int minCost(string colors, vector<int>& neededTime) {
  int time = 0;
  for (int i = 0; i < colors.size(); i++) {
    int total_time, maximum_time = total_time = neededTime[i];
    while (i + 1 < colors.size() && colors[i] == colors[i + 1]) {
      total_time += neededTime[i + 1];
      maximum_time = max(neededTime[i + 1], maximum_time);
      i++;
    }
    total_time -= maximum_time;
    time += total_time;
  }
  return time;
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  string colors;
  getline(cin, colors);

  int n;
  cin >> n;
  vector<int> neededTime(n);
  for (const int& time : neededTime) scanf("%d", &time);
  printf("%d\n", minCost(colors, neededTime));

  return 0;
}