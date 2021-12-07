#include <bits/stdc++.h>
using namespace std;

string fair_rations(int b[], int n) {
  int i = 0, loaves = 0;
  while (i < n - 1) {
    if (b[i] % 2 == 1) {
      b[i]++;
      b[i + 1]++;
      loaves += 2;
    }
    i++;
  }

  if (b[i] % 2 == 0) return to_string(loaves);
  return "NO";
}

int main() {
  int n;
  scanf("%d\n", &n);
  int b[n];
  for (int &num : b) scanf("%d ", &num);

  string loaves = fair_rations(b, n);
  printf("%s\n", loaves.c_str());

  return 0;
}