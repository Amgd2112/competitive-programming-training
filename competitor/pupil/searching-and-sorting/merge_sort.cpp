#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

vector<int> merge(vector<int> &a, vector<int> &b) {
  vector<int> m(a.size() + b.size());
  int i, j, k = j = i = 0;
  while (i < a.size() && j < b.size()) {
    if (a[i] < b[j]) {
      m[k++] = a[i++];
    } else {
      m[k++] = b[j++];
    }
  }
  while (i < a.size()) m[k++] = a[i++];
  while (j < b.size()) m[k++] = b[j++];
  return m;
}

void merge_sort(vector<int> &a) {
  if (a.size() <= 1) return;
  int mid = a.size() / 2;
  vector<int> b = vector<int>(a.begin(), a.begin() + mid);
  vector<int> c = vector<int>(a.begin() + mid, a.end());
  merge_sort(b);
  merge_sort(c);
  a = merge(b, c);
}

int main() {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);

  vector<int> a(n);
  for (int &ai : a) scanf("%d", &ai);

  merge_sort(a);
  for (int ai : a) printf("%d ", ai);

  return 0;
}