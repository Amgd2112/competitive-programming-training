#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int wordToBitset(string word) {
  int bitset = 0;
  for (const char& letter : word) bitset |= 1 << (letter - 'a');
  return bitset;
}

int maxProduct(vector<string>& words) {
  vector<int> bitsets;
  for (string word : words) bitsets.push_back(wordToBitset(word));
  int product = 0;
  for (int i = 0; i < words.size(); i++) {
    for (int j = i + 1; j < words.size(); j++) {
      if ((bitsets[i] & bitsets[j]) == 0) {
        product = max(product, (int)(words[i].size() * words[j].size()));
      }
    }
  }
  return product;
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  vector<string> words;
  string word;
  while (getline(cin, word, ' ')) {
    words.push_back(word);
  }

  printf("%d\n", maxProduct(words));

  return 0;
}