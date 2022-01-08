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

  int grade;
  scanf("%d", &grade);

  char ans;

  if ((grade >= 90) && (grade <= 100)) {
    ans = 'A';
  } else if ((grade >= 90) && (grade <= 100)) {
    ans = 'B';
  } else if ((grade >= 80) && (grade <= 90)) {
    ans = 'C';
  } else if ((grade >= 70) && (grade <= 80)) {
    ans = 'D';
  } else if ((grade >= 60) && (grade <= 70)) {
    ans = 'E';
  } else {
    ans = 'F';
  }

  printf("%c\n", ans);

  return 0;
}