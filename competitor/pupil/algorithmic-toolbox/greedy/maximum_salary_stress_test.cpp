#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  freopen("output.txt", "w", stdout);

#define N 100
#define M 1000

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

bool is_better(const int &n1, const int &n2) {
  string a = to_string(n1);
  string b = to_string(n2);
  return a + b >= b + a;
}

string largest_concatenate(int numbers[], int n) {
  string salary = "";

  while (n) {
    int idx = 0;
    for (int i = 1; i < n; i++) {
      if (is_better(numbers[i], numbers[idx])) {
        idx = i;
      }
    }
    salary += to_string(numbers[idx]);
    n--;
    swap(numbers[idx], numbers[n]);
  }

  return salary;
}

int main() {
  IOS;
  FIO;

  int t = 1000;
  while (t--) {
    int n = rand() % N + 1;
    int a[n];
    for (int &ai : a) ai = rand() % M + 1;

    string number = largest_concatenate(a, n);
    string salary = maximum_salary(a, n);
    if (number == salary) {
      printf("True\n");
      continue;
    }

    printf("False\n");
    break;
  }

  return 0;
}