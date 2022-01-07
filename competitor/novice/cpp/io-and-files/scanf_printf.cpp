#include <bits/stdc++.h>
using namespace std;

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

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

int main(int argc, char const *argv[]) {
  FIO;

  int n;
  scanf("%d", &n);
  printf("The number is %d\n", n);
  printf("N Memory Address: %d\n", &n);

  double d;
  scanf("%lf", &d);
  printf("PI = %lf\n", d);

  char first_name[10], last_name[20];
  scanf("%s %s", first_name, last_name);
  printf("My full name is %s %s\n", first_name, last_name);

  // 6422278 + (2^8)*7 = address of 7
  printf("%d %d\n", first_name, last_name);
  printf("%d %d\n", &first_name, &last_name);

  return 0;
}
