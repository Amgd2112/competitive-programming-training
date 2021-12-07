#include <bits/stdc++.h>
using namespace std;

int counting_valleys(char path[], int steps) {
  int tracker = 0, vallyes = 0;
  bool is_down = false;

  for (int i = 0; i < steps; i++) {
    if (path[i] == 'D' && tracker == 0) is_down = true;

    tracker += (path[i] == 'D') ? -1 : 1;

    if ((path[i] == 'U') && (tracker == 0) && is_down) {
      vallyes += 1;
      is_down = false;
    }
  }

  return vallyes;
}

int main() {
  int steps;
  scanf("%d", &steps);
  char path[steps];
  scanf("%s", &path);

  int vallyes = counting_valleys(path, steps);
  printf("%d\n", vallyes);

  return 0;
}