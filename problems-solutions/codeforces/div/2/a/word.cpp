#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

bool is_lower_word(string word) {
  int lower_count = 0;
  for (char letter : word) {
    if (islower(letter)) lower_count++;
  }
  return word.size() - lower_count <= lower_count;
}

int main() {
  IOS;
  //   FIO;
  string word;
  getline(cin, word);

  if (is_lower_word(word))
    transform(word.begin(), word.end(), word.begin(), ::tolower);
  else
    transform(word.begin(), word.end(), word.begin(), ::toupper);

  cout << word << endl;
  return 0;
}