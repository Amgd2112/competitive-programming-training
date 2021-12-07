#include <bits/stdc++.h>
using namespace std;

int get_money_spent(int n, int m, int budget) {
  int keyboards[n], drivers[m], costs[n * m];

  int i, j, k;
  i = j = k = 0;
  for (; i < n; i++) scanf("%d", &keyboards[i]);
  for (; j < m; j++) scanf("%d", &drivers[j]);

  for (i = 0; i < n; i++)
    for (j = 0; j < m; j++) costs[k++] = (keyboards[i] + drivers[j]);

  int cost = -1;
  for (i = 0; i < k; i++)
    if (costs[i] <= budget && costs[i] > cost) cost = costs[i];

  return cost;
}

int main() {
  int budget, n, m;
  scanf("%d %d %d\n", &budget, &n, &m);
  int cost = get_money_spent(n, m, budget);
  printf("%d\n", cost);

  return 0;
}
