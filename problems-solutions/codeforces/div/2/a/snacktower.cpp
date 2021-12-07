#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int main() {
  IOS;
  // FIO;

  int n;
  scanf("%d\n", &n);
  vector<int> a(n);
  for (int &ai : a) scanf("%d", &ai);

  vector<int> h;
  make_heap(h.begin(), h.end());

  for (int ai : a) {
    h.push_back(ai);
    push_heap(h.begin(), h.end());

    if (h.front() == n) {
      int f = h.front() + 1;
      while ((h.size() > 0) && (f == h.front() + 1)) {
        n -= 1;
        f = h.front();
        pop_heap(h.begin(), h.end());
        h.pop_back();
        printf("%d ", f);
      }
    }

    printf("\n");
  }
  return 0;
}