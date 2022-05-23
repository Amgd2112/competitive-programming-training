#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int a[100], b[100];

int max_idx(int const &begin, int const &end) {
  int idx = begin;
  for (int i = begin + 1; i <= end; i++) {
    if (a[idx] < a[i]) idx = i;
  }
  return idx;
}

void permutation_transformation(int const &l, int const &begin, int const &end) {
  if (begin > end) {
    return;
  } else {
    int idx = max_idx(begin, end);
    b[idx] = l;
    permutation_transformation(l + 1, begin, idx - 1);
    permutation_transformation(l + 1, idx + 1, end);
  }
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int t;
  scanf("%d", &t);

  int n;
  while (t--) {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    permutation_transformation(0, 0, n - 1);
    for (int i = 0; i < n; i++) printf("%d ", b[i]);
    printf("\n");
  }

  return 0;
}