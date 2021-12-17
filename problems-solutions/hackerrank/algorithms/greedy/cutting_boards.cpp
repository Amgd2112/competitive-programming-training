#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

#define M 1000000007

void increase_cost(int axis[], int &cost, int &cuts1, int &cuts2, int &idx) {
  cost = (cost + (axis[idx] * (unsigned long long)cuts1)) % M;
  cuts2++;
  idx++;
}

int minimum_board_cutting_cost(int x[], int y[], const int &n, const int &m) {
  sort(x, x + n, greater<int>());
  sort(y, y + m, greater<int>());

  int cost = 0;
  int i = 0, j = 0;
  int ycuts = 1, xcuts = 1;

  while (i < n && j < m) {
    if (x[i] == y[j]) {
      if (ycuts < xcuts) {
        increase_cost(y, cost, ycuts, xcuts, j);
      } else {
        increase_cost(x, cost, xcuts, ycuts, i);
      }
    } else if (x[i] > y[j]) {
      increase_cost(x, cost, xcuts, ycuts, i);
    } else {
      increase_cost(y, cost, ycuts, xcuts, j);
    }
  }

  while (i < n) increase_cost(x, cost, xcuts, ycuts, i);
  while (j < m) increase_cost(y, cost, ycuts, xcuts, j);

  return cost;
}

int main() {
  IOS;
  // FIO;

  int q, n, m;
  scanf("%d", &q);
  while (q--) {
    scanf("%d%d", &m, &n);
    int y[m - 1];
    for (int &yi : y) scanf("%d", &yi);
    int x[n - 1];
    for (int &xi : x) scanf("%d", &xi);
    int cost = minimum_board_cutting_cost(x, y, n - 1, m - 1);
    printf("%d\n", cost);
  }

  return 0;
}
