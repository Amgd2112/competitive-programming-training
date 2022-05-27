#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

unordered_map<int, string> symbols = {
    {1, "I"},   {5, "V"},    {10, "X"},   {50, "L"}, {100, "C"},
    {500, "D"}, {1000, "M"}, {4, "IV"},   {9, "IX"}, {40, "XL"},
    {90, "XC"}, {400, "CD"}, {900, "CM"},
};

vector<int> values = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};

string intToRoman(int num, int p = 1) {
  if (num == 0) {
    return "";
  } else if (num / p == 0) {
    if (symbols.find(num) != symbols.end()) {
      return symbols[num];
    } else {
      int i = lower_bound(values.begin(), values.end(), num) - values.begin() - 1;
      return intToRoman(values[i], p) + intToRoman(num - values[i], p);
    }
  } else {
    int x = (num / p) * p, y = num - x;  // drop digits under (p = 10^n)
    return intToRoman(x, p * 10) + intToRoman(y, p * 10);
  }
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int n;
  cin >> n;
  cout << intToRoman(n) << '\n';

  return 0;
}