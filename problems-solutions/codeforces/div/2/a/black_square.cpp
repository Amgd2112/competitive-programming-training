#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int calories(string arr, int a1, int a2, int a3, int a4) {
  unordered_map<int, int> counts{{1, 0}, {2, 0}, {3, 0}, {4, 0}};

  for (char num : arr) counts[num - '0']++;
  return a1 * counts[1] + a2 * counts[2] + a3 * counts[3] + a4 * counts[4];
}

int main() {
  IOS;
  //   FIO;

  int a1, a2, a3, a4;
  scanf("%d %d %d %d\n", &a1, &a2, &a3, &a4);
  string arr;
  getline(cin, arr);
  printf("%d\n", calories(arr, a1, a2, a3, a4));

  return 0;
}