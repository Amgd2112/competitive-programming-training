#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int main(int argc, char const *argv[]) {
  IOS;
  FIO;

  int n, m;
  scanf("%d %d", &n, &m);
  char ans[10];

  if (n < m) {
    // ['N', ' ', '<', ' ', 'M', '\0', '', '', '', .. 10]
    strcpy(ans, "N < M");
  } else {
    strcpy(ans, "N >= M");
  }

  printf("%s\n", ans);

  return 0;
}