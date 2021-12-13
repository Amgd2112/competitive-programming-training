#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

bool compare(const int &n1, const int &n2) {
  int x1, x2;
  x1 = n1 * pow(10, floor(log10(n2)) + 1) + n2;
  x2 = n2 * pow(10, floor(log10(n1)) + 1) + n1;
  return x1 < x2;
}

string maximum_salary(int a[], int n) {
  sort(a, a + n, compare);
  string salary = "";
  while (n--) salary += to_string(a[n]);
  return salary;
}

int main() {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);
  int a[n];
  for (const int &ai : a) scanf("%d", &ai);

  string salary = maximum_salary(a, n);
  printf("%s\n", salary.c_str());

  return 0;
}