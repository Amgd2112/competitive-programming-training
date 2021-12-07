#include <bits/stdc++.h>
using namespace std;

string bigger_is_greater(string word) {
  if (next_permutation(word.begin(), word.end())) return word;
  return "no answer";
}

int main() {
  int test_cases;
  scanf("%d\n", &test_cases);
  while (test_cases--) {
    string word;
    getline(cin, word);
    string bigger = bigger_is_greater(word);
    printf("%s\n", bigger.c_str());
  }

  return 0;
}