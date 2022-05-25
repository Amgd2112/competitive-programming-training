#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int numSplits(const string& s) {
  int n = s.size() - 1;
  int left[n], right[n];
  unordered_set<char> left_set, right_set;

  for (int i = 0; i < n; i++) {
    if (left_set.find(s[i]) == left_set.end()) left_set.insert(s[i]);
    left[i] = left_set.size();
  }

  for (int i = n; i > 0; i--) {
    if (right_set.find(s[i]) == right_set.end()) right_set.insert(s[i]);
    right[i - 1] = right_set.size();
  }

  int c = 0;
  for (int i = 0; i < n; i++) c += left[i] == right[i];
  return c;
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  string s;
  getline(cin, s);
  printf("%d\n", numSplits(s));

  return 0;
}
