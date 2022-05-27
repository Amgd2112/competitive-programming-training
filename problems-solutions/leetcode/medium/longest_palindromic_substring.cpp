#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

void reachablePalindromeBoundary(string s, int &center, int &low, int &high) {
  int l = low, h = high, c = center, r = 1;

  while (c - r >= 0 && c + r < s.size() && s[c - r] == s[c + r]) {
    r++;
  }  // r - 1

  while (l >= 0 && h < s.size() && s[l] == s[h]) {
    l--;
    h++;
  }  // l + 1, h - 1

  r--;
  l++;
  h--;

  if (h - l > 2 * r) {
    low = l;
    high = h;
  } else {
    low = c - r;
    high = c + r;
  }
}

string longestPalindrome(string s) {
  int low = 0, high = 0;
  for (int i = 0; i < s.size(); i++) {
    int c = i, l = i, h = i + 1;
    reachablePalindromeBoundary(s, c, l, h);
    if (h - l > high - low) {
      low = l;
      high = h;
    }
  }

  string ans = "";
  for (int i = low; i <= high; i++) ans += s[i];
  return ans;
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  string s;
  getline(cin, s);
  cout << longestPalindrome(s) << '\n';

  return 0;
}