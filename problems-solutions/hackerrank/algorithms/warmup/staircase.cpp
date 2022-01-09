#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);


void staircase(const int& n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j + i + 1 < n; j++) printf(" ");
    for (int k = 0; k < i + 1; k++) printf("#");

    printf("\n");
  }
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  staircase(n);

  return 0;
}