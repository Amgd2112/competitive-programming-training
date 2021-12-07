#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  vector<int> p(n);
  map<int, int> m;
  for (int i = 0; i < p.size(); ++i) {
    scanf("%d", &p[i]);
    m[p[i]] = i + 1;
  }

  for (int i = 0; i < n; i++) printf("%d\n", m[m[m[p[i]]]]);

  return 0;
}
