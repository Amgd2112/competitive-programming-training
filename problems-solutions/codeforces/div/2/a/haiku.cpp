#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int main() {
  IOS;
  // FIO;

  string phase, output = "YES";
  int haiku[] = {5, 7, 5};
  int vowels;
  for (int i = 0; i < 3; i++) {
    getline(cin, phase);
    vowels = 0;
    for (char &c : phase) {
      if (c == ' ') continue;
      if (c == 'a' || c == 'i' || c == 'o' || c == 'u' || c == 'e') vowels++;
    }

    if (vowels != haiku[i]) {
      output = "NO";
      break;
    }
  }

  printf("%s\n", output.c_str());

  return 0;
}