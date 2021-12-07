#include <bits/stdc++.h>
using namespace std;

int jumping_on_clouds(bool clouds[], int n) {
  int index = 0, counter = 0;

  while (index < n - 1) {
    index += !clouds[index + 2] ? 2 : 1;
    counter += 1;
  }

  return counter;
}

int main() {
  int n;
  scanf("%d\n", &n);
  bool clouds[n];
  for (int temp, i = 0; i < n; i++) {
    scanf("%d", &temp);
    clouds[i] = temp;
  }

  int minimum_number_of_jumps = jumping_on_clouds(clouds, n);
  printf("%d\n", minimum_number_of_jumps);

  return 0;
}