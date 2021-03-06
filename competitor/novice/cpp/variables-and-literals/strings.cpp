#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  cout << "Hello, World!\n";

  /*
   * String is an array of characters.
   * The last element in the array is equal to '\0', which is a null character.
   */
  char name[100] = "Hanan Mohamed";
  // ['H', 'a', 'n', 'a', 'n', ' ', 'M', 'o', 'h', 'a', 'm', 'e', 'd', '\0', '']
  cout << name << '\n';

  name[8] = '\0';
  // ['H', 'a', 'n', 'a', 'n', ' ', 'M', 'o', '\0', 'a', 'm', 'e', 'd', '\0', '']
  cout << name << '\n';

  name[8] = 'd';
  name[10] = '\0';
  // ['H', 'a', 'n', 'a', 'n', ' ', 'M', 'o', 'd', 'a', '\0', 'e', 'd', '\0','']
  cout << name << '\n';

  return 0;
}