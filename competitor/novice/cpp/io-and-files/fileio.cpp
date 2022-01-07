#include <bits/stdc++.h>
using namespace std;

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int main(int argc, char const *argv[]) {
  FIO;

  int n;
  cin >> n;
  cout << "The number is " << n << '\n';

  char c;
  cin >> c;
  cout << "The character is " << c << '\n';

  char first_name[20], last_name[10];  // String with a size of 9 characters
  cin >> first_name >> last_name;
  cout << "My full name is " << first_name << ' ' << last_name << '\n';

  return 0;
}