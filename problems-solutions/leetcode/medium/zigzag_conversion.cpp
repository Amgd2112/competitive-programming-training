#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

string convert(string s, int numRows) {
  vector<string> words(numRows);
  int i = 0, k = 0;
  while (k < s.size()) {
    for (int i = 0; i < numRows && k < s.size(); i++, k++) {
      words[i] += s[k];
    }

    for (int i = numRows - 2; i > 0 && k < s.size(); i--, k++) {
      words[i] += s[k];
    }
  }

  return accumulate(words.begin(), words.end(), string(""));
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  string s;
  getline(cin, s);
  int numRows;
  cin >> numRows;
  cout << convert(s, numRows) << '\n';

  return 0;
}