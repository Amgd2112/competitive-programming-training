#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int groubs(vector<int> magnets) {
  int count = 1;
  for (int i = 0; i < magnets.size() - 1; i++)
    if (magnets[i] != magnets[i + 1]) count++;
  return count;
}

int main() {
  IOS;
  //   FIO;

  int n;
  scanf("%d\n", &n);
  vector<int> magnets(n);
  for (int &magnet : magnets) scanf("%d\n", &magnet);

  printf("%d\n", groubs(magnets));

  return 0;
}