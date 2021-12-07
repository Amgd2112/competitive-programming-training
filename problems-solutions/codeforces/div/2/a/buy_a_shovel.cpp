#include <bits/stdc++.h>
using namespace std;
#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int minimum_shovels(int k, int r) {
  int count = 1;
  while (!((k * count) % 10 == 0 || (k * count - r) % 10 == 0)) count++;
  return count;
}

int main() {
  IOS;
  //   FIO;

  int k, r;
  scanf("%d %d\n", &k, &r);
  printf("%d\n", minimum_shovels(k, r));

  return 0;
}