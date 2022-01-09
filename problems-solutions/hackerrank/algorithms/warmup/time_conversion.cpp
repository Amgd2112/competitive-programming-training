#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

void time_conversion(int h, const int& m, const int& s, const char& c) {
  if (h == 12 && c == 'A') h = 0;
  if (h < 12 && c == 'P') h += 12;
  printf("%02d:%02d:%02d\n", h, m, s);
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  int h, m, s;
  char c;
  scanf("%d:%d:%d%c", &h, &m, &s, &c);
  time_conversion(h, m, s, c);

  return 0;
}