#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int untreated_crimes(int arr[], int n) {
  int police = 0, crimes = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] == -1 & police > 0)
      police--;
    else if (arr[i] > 0)
      police += arr[i];
    else
      crimes++;
  }

  return crimes;
}

int main() {
  IOS;
  //   FIO;

  int n;
  scanf("%d\n", &n);
  int arr[n];
  for (int &num : arr) scanf("%d", &num);
  printf("%d\n", untreated_crimes(arr, n));

  return 0;
}