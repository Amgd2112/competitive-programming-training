#include <bits/stdc++.h>
using namespace std;

#define MAX_SIZE 20001
int a[MAX_SIZE] = {0};

/*
    i < j < k
    a[j] - a[i] = a[k] - a[j] = d
    a[j] - 2a[i] = a[k] - a[j] - a[i]   by sub a[i]
    2a[j] - 2a[i] = a[k] - a[i]         by add a[j]
    2d = a[k] - a[i]
*/

int beautiful_triplets(int arr[], int d, int n) {
  int result = 0;
  for (int i = 0; i < n; i++) {
    a[arr[i]] += 1;  // increase occurrences by 1
    if (arr[i] - 2 * d > -1 && a[arr[i]] && a[arr[i] - d] && a[arr[i] - 2 * d])
      result += a[arr[i]] * a[arr[i] - d] * a[arr[i] - 2 * d];
  }
  return result;
}

int main() {
  int n, d;
  scanf("%d %d\n", &n, &d);
  int arr[n];
  for (int &num : arr) scanf("%d ", &num);

  int result = beautiful_triplets(arr, d, n);
  printf("%d\n", result);

  return 0;
}