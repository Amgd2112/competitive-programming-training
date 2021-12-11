#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

struct Item {
  double price;
  int weight;

  Item(double price = 0.0, int weight = 0) {
    this->price = price;
    this->weight = weight;
  }

  bool operator<(const Item &item) { return price < item.price; }
};

double maximum_loot(vector<Item> items, int w) {
  sort(items.begin(), items.end());
  reverse(items.begin(), items.end());

  double loot = 0.0;
  int i = 0;
  int n = items.size();
  while (i < n && w > 0) {
    int weight = min(items[i].weight, w);
    loot += weight * items[i].price;
    w -= weight;
    i++;
  }

  return loot;
}

int main() {
  IOS;
  // FIO;

  int n, w;
  scanf("%d %d\n", &n, &w);
  vector<Item> items(n);

  int total_price, weight;
  double price;
  while (n--) {
    scanf("%d %d", &total_price, &weight);
    price = double(total_price) / weight;
    items[n] = Item(price, weight);
  }

  double loot = maximum_loot(items, w);
  printf("%0.4lf\n", loot);

  return 0;
}