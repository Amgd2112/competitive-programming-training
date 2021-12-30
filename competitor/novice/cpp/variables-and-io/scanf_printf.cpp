#include <bits/stdc++.h>
using namespace std;

/*
 *   scanf("format_specifier", &val) => &var: variable reference
 *   printf("format_specifier", val) => var: actual variable
 */

/*   format_specifier
 *   -------------------------------------
 *   Short Integer              | "%hd"  |
 *   Unsigned Short Integer     | "%hu"  |
 *   Integer                    | "%d"   |
 *   Unsigned Integer           | "%u"   |
 *   Long Integer               | "%ld"  |
 *   Unsigned Long Integer      | "%lu"  |
 *   Long Long Integer          | "%lld" |
 *   Unsigned Long Long Integer | "%llu" |
 *   Float                      | "%f"   |
 *   Double                     | "%lf"  |
 *   Long Double                | "%Lf"  |
 *   Character                  | "%c"   |
 *   String                     | "%s"   |
 */

int main() {
  int n;
  scanf("%d", &n);
  printf("The number is %d\n", n);

  double pi;
  scanf("%lf", &pi);
  printf("PI = %lf\n", pi);

  unsigned short num;
  scanf("%hu", &num);
  printf("num + 90 = %hu\n", num + 90);

  return 0;
}
