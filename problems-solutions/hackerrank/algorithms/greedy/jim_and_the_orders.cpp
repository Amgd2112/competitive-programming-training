#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

struct Order {
  int customer_number, order_number, preparation_time, serve_time;
  Order(int c, int o, int p) {
    customer_number = c;
    order_number = o;
    preparation_time = p;
    serve_time = o + p;
  }

  static bool by_serving(const Order &a, const Order &b) {
    return a.serve_time < b.serve_time;
  }

  static bool by_customer(const Order &a, const Order &b) {
    return a.customer_number < b.customer_number;
  }
};

void jim_orders(vector<Order> &orders, const int &n) {
  sort(orders.begin(), orders.end(), Order::by_serving);
  int lower, upper;
  for (int i = 0; i < n; i++) {
    if (orders[i].serve_time == orders[i - 1].serve_time) {
      lower = i - 1;
      while (i < n && orders[i].serve_time == orders[i - 1].serve_time) i++;
      upper = i;
      sort(orders.begin() + lower, orders.begin() + upper, Order::by_customer);
    }
  }
}

int main() {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);

  vector<Order> orders;
  int o, p;
  for (int i = 0; i < n; i++) {
    scanf("%d%d", &o, &p);
    orders.push_back(Order(i + 1, o, p));
  }

  jim_orders(orders, n);
  for (const Order &order : orders) printf("%d ", order.customer_number);

  return 0;
}