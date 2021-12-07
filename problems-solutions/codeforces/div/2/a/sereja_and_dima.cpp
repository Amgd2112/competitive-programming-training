#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int get_max_card(int arr[], int &i, int &j) {
  if (arr[i] > arr[j]) return arr[i++];
  return arr[j--];
}

void games_results(int arr[], int n) {
  int sereja = 0, dima = 0;
  int i = 0, j = n - 1;
  while (i < j) {
    sereja += get_max_card(arr, i, j);
    dima += get_max_card(arr, i, j);
  }

  if (i == j) sereja += arr[i];

  printf("%d %d\n", sereja, dima);
}

int main() {
  IOS;
  //   FIO;

  int n;
  scanf("%d\n", &n);
  int arr[n];
  for (int &num : arr) scanf("%d", &num);
  games_results(arr, n);

  return 0;
}