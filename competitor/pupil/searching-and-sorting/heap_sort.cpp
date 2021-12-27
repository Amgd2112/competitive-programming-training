#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

void heap_sort(vector<int> &a) {
  vector<int> b = a;
  make_heap(b.begin(), b.end());
  for (int i = a.size() - 1; i > -1; i--) {
    a[i] = b.front();
    pop_heap(b.begin(), b.end());
    b.pop_back();
  }
}

int main() {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);

  vector<int> a(n);
  for (int &ai : a) scanf("%d", &ai);

  heap_sort(a);
  for (int ai : a) printf("%d ", ai);

  return 0;
}