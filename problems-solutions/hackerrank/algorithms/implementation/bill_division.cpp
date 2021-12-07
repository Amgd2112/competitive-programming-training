#include <bits/stdc++.h>
using namespace std;

void bon_appetit(int bill[], int n, int k, int b_charged) {
  int b_actual = 0;
  for (int i = 0; i < n; i++) {
    if (i == k) continue;
    b_actual += bill[i];
  }
  b_actual /= 2;

  if (b_charged == b_actual)
    printf("Bon Appetit\n");
  else
    printf("%d\n", b_charged - b_actual);
}

int main() {
  int n, k;
  scanf("%d %d", &n, &k);
  int bill[n];
  for (int i = 0; i < n; i++) scanf("%d", &bill[i]);
  int b_charged;
  scanf("%d", &b_charged);

  bon_appetit(bill, n, k, b_charged);

  return 0;
}