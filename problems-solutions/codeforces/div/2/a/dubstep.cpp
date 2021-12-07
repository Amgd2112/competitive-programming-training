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

  string song;
  getline(cin, song);
  int size = song.size(), window = 2;
  bool visited[size] = {0};

  for (int i = 0; i < size - window; i++) {
    if (song[i] == 'W' && song[i + 1] == 'U' && song[i + 2] == 'B') {
      for (int j = 0; j <= window; j++) visited[i + j] = true;
      i += 2;
    }
  }

  string s = "";
  for (int i = 0; i < size; i++) {
    if (visited[i]) continue;
    while (!visited[i]) s += song[i++];
    s += ' ';
  }

  printf("%s\n", s.c_str());
  return 0;
}