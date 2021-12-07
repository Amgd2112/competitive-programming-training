#include <bits/stdc++.h>
using namespace std;

#define MAX 100
int arr[MAX] = {0};

int picking_numbers() {
  int longest_subarray = 0;
  for (int i = 0; i < MAX - 1; i++)
    if (arr[i] + arr[i + 1] > longest_subarray)
      longest_subarray = arr[i] + arr[i + 1];
  return longest_subarray;
}

int main() {
  int n;
  scanf("%d", &n);
  for (int index, i = 0; i < n; i++) {
    scanf("%d", &index);
    arr[index - 1] += 1;
  }

  int longest_subarray = picking_numbers();
  printf("%d\n", longest_subarray);

  return 0;
}