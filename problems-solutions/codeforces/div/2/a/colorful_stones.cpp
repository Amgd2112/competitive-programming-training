#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int position(string stones, string instructions) {
  int i = 0, j = 0;
  while (i < stones.size() && j < instructions.size()) {
    if (stones[i] == instructions[j]) i++;
    j++;
  }

  return i + 1;
}

int main() {
  IOS;
  //   FIO;

  string stones, instructions;
  getline(cin, stones);
  getline(cin, instructions);
  printf("%d\n", position(stones, instructions));

  return 0;
}