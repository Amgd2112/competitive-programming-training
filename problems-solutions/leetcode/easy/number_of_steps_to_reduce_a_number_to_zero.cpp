#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int numberOfSteps(int num) {
  if (num <= 1) {
    return num;
  } else if (num & 1) {
    return 2 + numberOfSteps((num - 1) >> 1);
  } else {
    return 1 + numberOfSteps(num >> 1);
  }
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  printf("%d\n", numberOfSteps(n));

  return 0;
}