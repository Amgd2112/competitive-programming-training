#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

void permutation(char a[], const int &start, const int &end) {
  if (start == end) {
    printf("%s\n", a);
    return;
  } else {
    for (int i = start; i < end; i++) {
      swap(a[start], a[i]);            // swapping
      permutation(a, start + 1, end);  // recursion called
      swap(a[start], a[i]);            // backtrack
    }
  }
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);

  char a[n];
  scanf("%s", a);
  permutation(a, 0, n);

  return 0;
}