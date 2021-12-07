#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int main() {
  IOS;
  //   FIO;
  int n;
  scanf("%d\n", &n);
  string word;
  int size;

  while (n--) {
    getline(cin, word);
    size = word.size();
    if (size > 10)
      printf("%c%d%c\n", word[0], size - 2, word[size - 1]);
    else
      printf("%s\n", word.c_str());
  }

  return 0;
}