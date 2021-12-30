#include <bits/stdc++.h>
using namespace std;

/* Function	Description
 *  abs(x)       |  Returns the absolute value of x
 *  acos(x)      |  Returns the arccosine of x
 *  asin(x)      |  Returns the arcsine of x
 *  atan(x)      |  Returns the arctangent of x
 *  cbrt(x)      |  Returns the cube root of x
 *  ceil(x)      |  Returns the value of x rounded up to its nearest integer
 *  cos(x)       |  Returns the cosine of x
 *  cosh(x)      |  Returns the hyperbolic cosine of x
 *  exp(x)       |  Returns the value of Ex
 *  expm1(x)     |  Returns ex -1
 *  fabs(x)      |  Returns the absolute value of a floating x
 *  fdim(x, y)   |  Returns the positive difference between x and y
 *  floor(x)     |  Returns the value of x rounded down to its nearest integer
 *  hypot(x, y)  |  Returns sqrt(x2 + y2) without intermediate overflow or underflow
 *  fma(x, y, z) |  Returns x*y+z without losing precision
 *  fmax(x, y)   |  Returns the highest value of a floating x and y
 *  fmin(x, y)   |  Returns the lowest value of a floating x and y
 *  fmod(x, y)   |  Returns the floating point remainder of x/y
 *  pow(x, y)    |  Returns the value of x to the power of y
 *  sin(x)       |  Returns the sine of x (x is in radians)
 *  sinh(x)      |  Returns the hyperbolic sine of a double value
 *  tan(x)       |  Returns the tangent of an angle
 *  tanh(x)      |  Returns the hyperbolic tangent of a double value
 */

int main() {
  const double PI = M_PI;
  printf("%lf\n", PI);

  printf("%lf\n", round(PI));  // round
  printf("%lf\n", ceil(PI));   // round up
  printf("%lf\n", floor(PI));  // round down
  printf("%lf\n", trunc(PI));  // remove number after perception

  printf("max: %d, min:%d\n", max(6, 12), min(6, 12));
  printf("%lf\n", pow(PI, 2));
  printf("%lf\n", sqrt(PI));
  printf("%lf\n", log10(923842349));  // log()
  printf("%lf\n", log(923842349));    // natural logarithm => ln()

  return 0;
}

/* output:
 *  3.141593
 *  3.000000
 *  4.000000
 *  3.000000
 *  3.000000
 *  9.869604
 *  1.772454
 *  8.965598
 *  20.644052
 *  max: 12, min:6
 */