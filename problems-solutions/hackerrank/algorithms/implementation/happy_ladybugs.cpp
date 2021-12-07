#include <bits/stdc++.h>
using namespace std;

unordered_map<bool, string> OUTPUT = {{false, "NO"}, {true, "YES"}};

bool is_happy_ladybugs(string b) {
  int a[26] = {0};
  bool is_happy = true, has_empty_cell = false;

  int i, c;
  for (i = 0; i < b.size(); i++) {
    if (b[i] == '_') {
      has_empty_cell = true;
      continue;
    }

    c = 1;
    if (is_happy) {
      while (i < b.size() - 1 && b[i] == b[i + 1]) {
        c++;
        i++;
      }
      if (c == 1) is_happy = false;
    }
    a[b[i] % 'A'] += c;
  }

  if (is_happy) return true;

  if (has_empty_cell) {
    for (i = 0; i < 26; i++)
      if (a[i] == 1) return false;
    return true;
  }

  return false;
}

int main() {
  int test_cases;
  scanf("%d\n", &test_cases);
  while (test_cases--) {
    int n;
    scanf("%d\n", &n);
    string b;
    getline(cin, b);
    cout << OUTPUT[is_happy_ladybugs(b)] << endl;
  }

  return 0;
}