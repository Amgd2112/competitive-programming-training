#include <bits/stdc++.h>
using namespace std;

void angry_professor() {
  int n, k;
  scanf("%d %d", &n, &k);
  int disciplined = 0;
  for (int time, i = 0; i < n; i++) {
    scanf("%d", &time);
    if (time <= 0) disciplined += 1;
  }

  printf("%s\n", (disciplined < k) ? "YES" : "NO");
}

int main() {
  int test_cases;
  scanf("%d", &test_cases);
  while (test_cases--) angry_professor();

  return 0;
}