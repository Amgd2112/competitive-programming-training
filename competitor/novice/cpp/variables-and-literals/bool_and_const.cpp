#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  bool is_valid = true;
  cout << is_valid << endl;

  bool is_available;
  cout << is_available << endl;
  is_available = false;
  cout << is_available << endl;
  is_available = 33;
  cout << is_available << endl;

  // boolean casting
  cout << bool(33) << endl;
  cout << bool(-33) << endl;
  cout << bool(0) << endl;

  // naming = > constant(uppercase, _)
  const bool TRUE = true;
  cout << TRUE << endl;

  const double pi = 3.14;  // OK
  const int val;  // error! cannot modify its value and must be initialized

  return 0;
}