#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

void say_i_am_pupil(const int &n) {
  if (n == 0) return;             // base case
  say_i_am_pupil(n - 1);          // recursive call
  printf("%d: I'm Pupil.\n", n);  // logic
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  say_i_am_pupil(n);

  return 0;
}