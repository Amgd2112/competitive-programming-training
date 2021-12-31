#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

void draw(const int &n, const char &symbol) {
  if (n == 0) return;
  for (int i = 0; i < n; i++) printf("%c", symbol);
  printf("\n");
  draw(n - 1, symbol);
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int n;
  char s;
  scanf("%d %c\n", &n, &s);
  draw(n, s);

  return 0;
}