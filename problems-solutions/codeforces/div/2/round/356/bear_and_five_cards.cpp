#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int minimum_possible_sum(int cards[]) {
  unordered_map<int, int> counts;
  int total = 0;

  for (int i = 0; i < 5; i++) {
    counts[cards[i]] = 0;
    total += cards[i];
  }

  for (int i = 0; i < 5; i++) counts[cards[i]]++;
  int num = 0, occ = 0;
  for (auto const &card : counts) {
    if (card.second > 1 && card.first * card.second > num * occ) {
      num = card.first;
      occ = card.second;
    }
  }

  if (occ > 3) occ = 3;
  return total - num * occ;
}

int main() {
  IOS;
  //   FIO;

  int cards[5];
  for (int &card : cards) scanf("%d", &card);
  printf("%d\n", minimum_possible_sum(cards));

  return 0;
}