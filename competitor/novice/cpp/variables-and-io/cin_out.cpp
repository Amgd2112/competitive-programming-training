#include <bits/stdc++.h>
using namespace std;

/*
 * cout << val : print
 * cin >> val : read
 */

int main() {
  int n;
  cin >> n;
  cout << "The number is " << n << '\n';
  // '\n' new line, to add a new line at the end of the printing statement

  char first_name[10],
      last_name[10];  // String with a size of 9 characters
  /*
   * String is an array of characters.
   * The last element in the array is equal to '\0', which is a null character.
   */

  cin >> first_name >> last_name;
  cout << "My full name is " << first_name << ' ' << last_name << '\n';

  return 0;
}