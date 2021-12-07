#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int minimum_rotations(string name) {
  char top_letter = 'a';
  int rotations = 0;
  for (int i = 0; i < name.size(); i++) {
    rotations +=
        min(abs(abs(name[i] - top_letter) - 26), abs(name[i] - top_letter));
    top_letter = name[i];
  }

  return rotations;
}

int main() {
  IOS;
  //   FIO;

  string name;
  getline(cin, name);
  printf("%d\n", minimum_rotations(name));

  return 0;
}