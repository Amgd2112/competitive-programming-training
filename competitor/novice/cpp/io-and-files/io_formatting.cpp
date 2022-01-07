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

  // set width
  cout << "Hi" << setw(20) << "Amgad Hussein" << '\n';

  int n;
  scanf("%d", &n);
  printf("The number is %d\n", n);

  double d;
  scanf("%lf\n", &d);
  printf("%0.7lf\n", d);  // rounding to the nearest decimal
  /* other way:
   *  cout << fixed << setprecision(3) << d << '\n';
   */

  unsigned short num;
  scanf("%hu\n", &num);  // escape the next new line on the input stream

  /*   format_specifier
   *   ---------------------------
   *   Ocatl            | "%0o"  |
   *   Hexadecimal      | "%0x"  |
   */
  printf("Dec(num + 90): %d\n", num + 90);
  printf("Hex(num + 90) = %0x\n", num + 90);
  /* other way:
   *  cout << "Dec(num + 90) = " << (num + 90) << '\n';
   *  cout << "Oct(num + 90) = " << oct << (num + 90) << '\n';
   *  cout << "Hex(num + 90) = " << hex << (num + 90) << '\n';
   */

  // initialize array of characters with size greater than the input size
  char fname[10], lname[20];
  scanf("%s %s\n", fname, lname);  // read string, escape ' ', read string
  printf("My full name is %s %s\n", fname, lname);

  // regex
  char s[100], x[100];

  scanf("%[A-F]", s);  // read only the range [A -> F]
  printf("s:%s\n", s);

  scanf("%[^0-5]", s);  // read anything except the range [0 -> 5]
  printf("s:%s\n", s);

  scanf("%[0-9 | \n]%s\n", s, x);  // read only the range [0 -> 9]
  printf("s:%s, x:%s\n", s, x);

  scanf("%[^\n]\n", s);  // read anything except the new line = read line
  printf("s:%s\n", s);

  scanf("%3[A-F]\n", s);  // read only 3 characters from the range [A -> F]
  printf("s:%s\n", s);

  return 0;
}
