#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

void hanoi(int n, int start, int end) {
  if (n < 1) return;
  int mid = 6 - (end + start);
  hanoi(n - 1, start, mid);
  printf("%d -> %d\n", start, end);
  hanoi(n - 1, mid, end);
}

int main() {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  hanoi(n, 1, 3);

  return 0;
}