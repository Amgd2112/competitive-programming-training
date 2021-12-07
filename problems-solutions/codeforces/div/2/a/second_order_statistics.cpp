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

  int n;
  scanf("%d", &n);

  int a, m1, m2 = m1 = INT_MAX;
  while (n--) {
    scanf("%d", &a);
    if (m1 > a) {
      m2 = m1;
      m1 = a;
    }

    if (a < m2 && m1 < a) m2 = a;
  }

  if (m2 == INT_MAX)
    printf("%s\n", "NO");
  else
    printf("%d\n", m2);

  return 0;
}