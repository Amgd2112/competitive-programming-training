#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int myAtoi(string s) {
  int i = 0;

  while (i < s.size() && s[i] == ' ') i++;  // ignore whitespace

  if (i == s.size()) return 0;  // special case (all string is empty)

  bool neg = s[i] == '-';  // check for the sign
  if (s[i] == '-' || s[i] == '+') i++;

  string nums = "";  // get the string of numbers
  while (i < s.size() && isdigit(s[i])) nums += s[i++];
  if (nums.empty()) return 0;

  int x = 0;  // convert string to int using stoi
  bool out = false;
  try {
    x = stoi(nums);
  } catch (out_of_range &e) {
    out = true;
  }

  if (out && neg) {
    return INT_MIN;
  } else if (out) {
    return INT_MAX;
  } else if (neg) {
    return x * -1;
  } else {
    return x;
  }
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  string s;
  getline(cin, s);
  printf("%d\n", myAtoi(s));

  return 0;
}