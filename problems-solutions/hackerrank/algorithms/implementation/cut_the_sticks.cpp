#include <bits/stdc++.h>
using namespace std;

#define MAX 1000

void sticks_cut(int arr[], int n) {
  int i = 0;
  while (i < MAX) {
    if (arr[i]) {
      printf("%d\n", n);
      n -= arr[i];
    }
    i++;
  }
}

int main() {
  int n;
  scanf("%d", &n);
  int arr[MAX] = {0};
  for (int num, i = 0; i < n; ++i) {
    scanf("%d", &num);
    if (arr[num - 1])
      arr[num - 1] += 1;
    else
      arr[num - 1] = 1;
  }

  sticks_cut(arr, n);
  return 0;
}