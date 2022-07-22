#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

unordered_map<string, char> decode;
int decodeWays(string code, int idx) {
  if (idx == code.size()) return 1;

  int path1 = 0, path2 = 0;
  if (decode.find(code.substr(idx, 1)) != decode.end()) {
    path1 = decodeWays(code, idx + 1);
  }

  if (idx + 1 < code.size() &&
      decode.find(code.substr(idx, 2)) != decode.end()) {
    path2 = decodeWays(code, idx + 2);
  }

  return path1 + path2;
}

int numDecodings(string s) {
  for (int c = 'A'; c <= 'Z'; c++) decode[to_string(c - 'A' + 1)] = char(c);
  return decodeWays(s, 0);
}

int main(int argc, char const *argv[]) {
  IOS;
  FIO;

  string s;
  getline(cin, s);
  printf("%d\n", numDecodings(s));

  return 0;
}