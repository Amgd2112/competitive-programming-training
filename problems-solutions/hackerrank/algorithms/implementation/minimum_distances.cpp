#include <bits/stdc++.h>
using namespace std;

#define MAX_SIZE 100001
int idx[MAX_SIZE] = {0};

int minimum_distances(int a[], int n) {
  int minimum_distance = MAX_SIZE;
  for (int i = 0; i < n; i++) {
    if (idx[a[i]] && i - idx[a[i]] + 1 < minimum_distance)
      minimum_distance = i - idx[a[i]] + 1;
    idx[a[i]] = i + 1;
  }

  if (minimum_distance == INT_MAX) return -1;
  return minimum_distance;
}

int main() {
  int n;
  scanf("%d\n", &n);
  int a[n];
  for (int &num : a) scanf("%d ", &num);

  int minimum_distance = minimum_distances(a, n);
  printf("%d\n", minimum_distance);

  return 0;
}