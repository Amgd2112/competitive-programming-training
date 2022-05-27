#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

string restoreString(string s, vector<int>& indices) {
  string ans(s.size(), ' ');
  for (int i = 0; i < s.size(); i++) {
    ans[indices[i]] = s[i];
  }
  return ans;
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  string s;
  getline(cin, s);

  int n;
  cin >> n;
  vector<int> indices(n);
  for (int& index : indices) cin >> index;
  cout << restoreString(s, indices);

  return 0;
}