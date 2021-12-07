#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int taken_stones(string arr, int n) {
  int c = 0, i = 0;
  while (i < n - 1) {
    while (arr[i] == arr[i + 1]) {
      c++;
      i++;
    };
    i++;
  }
  return c;
}

int main() {
  IOS;
  //   FIO;

  int n;
  scanf("%d\n", &n);
  string arr;
  getline(cin, arr);
  int stones = taken_stones(arr, n);
  printf("%d\n", stones);

  return 0;
}