#include <bits/stdc++.h>
using namespace std;

#define N 4
#define M 200

long long max_pairwise_product_naive(int a[], int n) {
  long long max_product = 0;

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      long long product = (long long)(a[i]) * a[j];
      if (product > max_product) max_product = product;
    }
  }

  return max_product;
}

long long max_pairwise_product_fast(int a[], int n) {
  int max1 = -1, max1_idx = -1;
  for (int i = 0; i < n; i++) {
    if (max1 < a[i]) {
      max1 = a[i];
      max1_idx = i;
    }
  }

  int max2 = -1;
  for (int i = 0; i < n; i++) {
    if (i == max1_idx) continue;
    if (max2 < a[i]) max2 = a[i];
  }

  return (long long)max1 * max2;
}

long long max_pairwise_product_fast_heapify(vector<int> a) {
  make_heap(a.begin(), a.end());

  int max1 = a.front();
  pop_heap(a.begin(), a.end());
  a.pop_back();
  int max2 = a.front();

  return (long long)max1 * max2;
}

void display(int a[], int n) {
  for (int i = 0; i < n; i++) printf("%d ", a[i]);
  printf("\n");
}

int main() {
  while (true) {
    int n = rand() % N + 2;
    int a[n];
    for (int &ai : a) ai = rand() % M;
    display(a, n);

    long long res1 = max_pairwise_product_naive(a, n);
    long long res2 = max_pairwise_product_fast(a, n);
    // long long res3 = max_pairwise_product_fast_heapify(vector<int>(a, a +
    // n));

    if (res1 == res2) continue;
    printf("Wrong answer: %lld %lld\n", res1, res2);
    break;
  }

  return 0;
}