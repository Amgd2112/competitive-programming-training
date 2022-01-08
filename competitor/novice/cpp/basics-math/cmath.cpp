#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

/* Function	Description
 * abs(x)       |  Returns the absolute value of x => |-x/x| = +x
 * acos(x)      |  Returns the arccosine of x
 * asin(x)      |  Returns the arcsine of x
 * atan(x)      |  Returns the arctangent of x
 * cbrt(x)      |  Returns the cube root of x
 * ceil(x)      |  Returns the value of x rounded up to its nearest integer
 * cos(x)       |  Returns the cosine of x
 * cosh(x)      |  Returns the hyperbolic cosine of x
 * exp(x)       |  Returns the value of Ex
 * expm1(x)     |  Returns ex -1
 * fabs(x)      |  Returns the absolute value of a floating x
 * fdim(x, y)   |  Returns the positive difference between x and y
 * floor(x)     |  Returns the value of x rounded down to its nearest integer
 * hypot(x, y)  |  Returns sqrt(x2 + y2) without intermediate overflow or
 * underflow
 * fma(x, y, z) |  Returns x*y+z without losing precision
 * fmax(x, y)   |  Returns the highest value of a floating x and y
 * fmin(x, y)   |  Returns the lowest value of a floating x and y
 * fmod(x, y)   |  Returns the floating point remainder of x/y
 * pow(x, y)    |  Returns the value of x to the power of y
 * sin(x)       |  Returns the sine of x (x is in radians)
 * sinh(x)      |  Returns the hyperbolic sine of a double value
 * tan(x)       |  Returns the tangent of an angle
 * tanh(x)      |  Returns the hyperbolic tangent of a double value
 */

int main(int argc, char const *argv[]) {
  IOS;
  FIO;

  const double PI = M_PI;
  printf("PI: %lf\n", PI);

  printf("round(%lf): %lf\n", PI, round(PI));  // round
  printf("ceil(%lf): %lf\n", PI, ceil(PI));    // round up
  printf("floor(%lf): %lf\n", PI, floor(PI));  // round down
  printf("trunc(%lf): %lf\n", PI, trunc(PI));  // remove number after perception

  int n = 6, m = 12;
  printf("max: %d, min:%d\n", max(n, m), min(n, m));
  printf("PI^2: %lf\n", pow(PI, 2));
  printf("sqrt(PI): %lf\n", sqrt(PI));

  int x = 923842349;
  printf("digits(%d): %lf\n", x, log10(x));
  printf("ln(%d): %lf\n", x, log(x));

  return 0;
}
