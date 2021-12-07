#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int compare_lexicographically(string first, string second) {
  int length = first.size(), i = 0;
  while (i < length && tolower(first[i]) == tolower(second[i])) i++;

  if (i == length) return 0;
  if (tolower(first[i]) < tolower(second[i])) return -1;
  return 1;
}

int main() {
  IOS;
  //   FIO;

  string first, second;
  getline(cin, first);
  getline(cin, second);
  printf("%d\n", compare_lexicographically(first, second));

  return 0;
}