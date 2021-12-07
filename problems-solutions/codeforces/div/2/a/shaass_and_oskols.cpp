#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

vector<int> birds(vector<int> wires, vector<pair<int, int>> axs) {
  for (pair<int, int> ax : axs) {
    ax.first--;
    if (ax.first + 1 < wires.size())
      wires[ax.first + 1] += wires[ax.first] - ax.second;
    if (ax.first - 1 > -1) wires[ax.first - 1] += ax.second - 1;
    wires[ax.first] = 0;
  }

  return wires;
}

int main() {
  IOS;
  //   FIO;

  int n;
  scanf("%d\n", &n);
  vector<int> wires(n);
  for (int &wire : wires) scanf("%d", &wire);

  int m;
  scanf("%d\n", &m);
  vector<pair<int, int>> axs(m);
  for (pair<int, int> &ax : axs) scanf("%d %d\n", &ax.first, &ax.second);

  for (int wire : birds(wires, axs)) printf("%d\n", wire);

  return 0;
}