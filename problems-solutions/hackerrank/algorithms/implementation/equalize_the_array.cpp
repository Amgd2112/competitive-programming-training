#include <bits/stdc++.h>
using namespace std;

#define MAX 101
int occurrence[MAX] = {0};

int equalize_array(int arr[], int n) {
  int max_occ = INT_MIN;
  for (int i = 0; i < n; i++) {
    occurrence[arr[i]] += 1;
    if (occurrence[arr[i]] > max_occ) {
      max_occ = occurrence[arr[i]];
    }
  }

  return n - max_occ;
}

int main() {
  int n;
  scanf("%d\n", &n);
  int arr[n];
  for (int temp, i = 0; i < n; i++) {
    scanf("%d", &temp);
    arr[i] = temp;
  }

  int minimum_number_of_deletions = equalize_array(arr, n);
  printf("%d\n", minimum_number_of_deletions);

  return 0;
}