#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int numJewelsInStones(string jewels, string stones) {
  unordered_set<char> us;
  for (const char &jewel : jewels) us.insert(jewel);
  int ans = 0;
  for (const char &stone : stones) {
    if (us.find(stone) != us.end()) ans++;
  }
  return ans;
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  string jewels, stones;
  getline(cin, jewels);
  getline(cin, stones);
  printf("%d\n", numJewelsInStones(jewels, stones));

  return 0;
}