#include <bits/stdc++.h>
using namespace std;

int non_divisible_subset(int s[], int n, int k) {
  int modulos[k] = {0};
  for (int i = 0; i < n; i++) modulos[s[i] % k] += 1;

  int subset = modulos[0] != 0;
  for (int i = 1; i < k / 2 + 1; i++)
    if (k % 2 == 0 && i == k / 2 && modulos[i])
      subset += 1;
    else
      subset += max(modulos[i], modulos[k - i]);  // complement

  return subset;
}

int main() {
  int n, k;
  scanf("%d %d\n", &n, &k);
  int s[n];
  for (int i = 0; i < n; i++) scanf("%d", &s[i]);
  int longest_subset = non_divisible_subset(s, n, k);
  printf("%d\n", longest_subset);

  return 0;
}