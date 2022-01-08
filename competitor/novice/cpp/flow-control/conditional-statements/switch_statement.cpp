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

  char grade = 'O';

  /*
   * char ans[20];
   * if (grade == 'A') {
   *   strcpy(ans, "Excellent!");
   * } else if (grade == 'B') {
   *   strcpy(ans, "Great!");
   * } else if (grade == 'C') {
   *   strcpy(ans, "Well done");
   * } else if (grade == 'D') {
   *   strcpy(ans, "You passed");
   * } else if (grade == 'F') {
   *   strcpy(ans, "Better try again");
   * } else {
   *   strcpy(ans, "Invalid grade");
   * }
   *
   * printf("%s\n", ans);
   * printf("Your grade is %c\n", grade);
   */

  switch (grade) {
    case 'A':
      printf("Excellent!\n");
      break;

    case 'B':

    case 'C':
      printf("Well done\n");
      break;

    case 'D':
      printf("You passed\n");
      break;

    case 'F':
      printf("Better try again\n");
      break;

    default:
      printf("Invalid grade!\n");
  }

  printf("Your grade is %c\n", grade);

  return 0;
}