#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

struct Item {
  int value;
  int weight;
  double vpw;  // value per weight

  Item(int value = 0.0, int weight = 0) {
    this->value = value;
    this->weight = weight;
    vpw = double(value) / weight;
  }

  bool operator<(const Item &item) { return vpw < item.vpw; }
};

double maximum_loot(vector<Item> items, int knapsack) {
  sort(items.begin(), items.end());

  double loot = 0.0;
  int i = items.size();
  int weight;
  while (i-- && knapsack) {
    weight = min(items[i].weight, knapsack);
    loot += weight * items[i].vpw;
    knapsack -= weight;
  }

  return loot;
}

int main() {
  IOS;
  // FIO;

  int n, w;
  scanf("%d %d\n", &n, &w);
  vector<Item> items(n);

  int value, weight;
  while (n--) {
    scanf("%d %d", &value, &weight);
    items[n] = Item(value, weight);
  }

  double loot = maximum_loot(items, w);
  printf("%0.4lf\n", loot);

  return 0;
}