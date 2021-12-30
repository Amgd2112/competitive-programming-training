#include <bits/stdc++.h>
using namespace std;

/* input:
 *  89 2.2329 832
 *  Amgad Hussein
 *  AADFEGwhat
 *  AbC$x8d235
 *  328239Hello
 *  Amgad Hussein
 *  ADBDADFADFASDFASDF
 */

int main() {
  // set width
  cout << "Hi" << setw(20) << "Amgad Hussein" << '\n';

  int n;
  scanf("%d\t", &n);  // read then escape the next tab on the input stream
  printf("The number is %d\n", n);

  double d;
  scanf("%lf\t", &d);
  printf("%0.3lf\n", d);  // rounding to the nearest decimal
  /* other way:
   *  cout << fixed << setprecision(3) << d << '\n';
   */

  unsigned short num;
  scanf("%u\n", &num);  // escape the next new line on the input stream
  /* other way:
   *  cin >> num;
   *  cin.get(); // to get the next new line
   */

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
  char fname[10], lname[10];
  scanf("%s %s\n", &fname, &lname);  // read string, escape ' ', read string
  printf("My full name is %s %s\n", fname, lname);

  // regex
  char s[100], x[100];
  scanf("%[A-F]", &s);  // read only the range [A -> F]
  printf("s:%s\n", s);

  scanf("%[^0-5]", &s);  // read anything except the range [0 -> 5]
  printf("s:%s\n", s);

  scanf("%[0-9 | \n]%s\n", &s, &x);  // read only the range [0 -> 9]
  printf("s:%s, x:%s\n", s, x);

  scanf("%[^\n]\n", &s);  // read anything except the new line = read line
  printf("s:%s\n", s);

  scanf("%3[A-F]\n", &s);  // read only 3 characters from the range [A -> F]
  printf("s:%s\n", s);

  return 0;
}
