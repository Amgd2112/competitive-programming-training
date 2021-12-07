#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

unordered_map<string, int> polyhedrons_faces = {
    {"Tetrahedron", 4},   {"Cube", 6},         {"Octahedron", 8},
    {"Dodecahedron", 12}, {"Icosahedron", 20},
};

int main() {
  IOS;
  // FIO;

  int n;
  cin >> n;
  cin.get();

  string polyhedron;
  int cnt = 0;
  while (n--) {
    getline(cin, polyhedron);
    cnt += polyhedrons_faces[polyhedron];
  }

  printf("%d\n", cnt);

  return 0;
}