#include <bits/stdc++.h>
using namespace std;

string append_and_delete(string str, string target, int k) {
  if (str.length() + target.length() < k) return "Yes";

  int i = 0;
  while (i < target.length() && i < str.length()) {
    if (str[i] != target[i]) break;
    i++;
  }

  // count the required operations to delete the elements from i+1 to s1.size-1
  // count the required operations to append the elements from target.size-1 to
  // i+1
  int required_operations = str.size() - i + target.size() - i;
  if (required_operations <= k && required_operations % 2 == k % 2)
    return "Yes";
  return "No";
}

int main() {
  string s, t;
  getline(cin, s);
  getline(cin, t);
  int k;
  scanf("%d\n", &k);
  string result = append_and_delete(s, t, k);
  printf("%s\n", result.c_str());

  return 0;
}