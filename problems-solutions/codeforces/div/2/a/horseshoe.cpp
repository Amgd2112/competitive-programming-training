#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int minimum_horseshoes(vector<int> shoes) {
  unordered_map<int, int> counts;
  for (int &shoe : shoes) counts[shoe] = 0;
  for (int &shoe : shoes) counts[shoe]++;

  int horseshoes = 0;
  for (auto const &shoe : counts) horseshoes += shoe.second - 1;
  return horseshoes;
}

int main() {
  IOS;
  //   FIO;

  vector<int> shoes(4);
  for (int &shoe : shoes) scanf("%d", &shoe);
  printf("%d\n", minimum_horseshoes(shoes));

  return 0;
}