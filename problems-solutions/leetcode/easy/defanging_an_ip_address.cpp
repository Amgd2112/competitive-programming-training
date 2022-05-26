#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

string defangIPaddr(string address) {
  string defang_address = "";
  for (const char &c : address) {
    if (c == '.') {
      defang_address += "[.]";
    } else {
      defang_address += c;
    }
  }
  return defang_address;
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  string address;
  getline(cin, address);
  printf("%s\n", defangIPaddr(address));

  return 0;
}