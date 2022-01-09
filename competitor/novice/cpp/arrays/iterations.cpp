#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

void forward_iteration(const int a[], const int &n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

void backward_iteration(const int a[], int n) {
  while (n--) printf("%d ", a[n]);
  printf("\n");
}

void bi_directional_iteration(const int a[], const int &n) {
  int i = 0, j = n - 1;
  while (i <= j) {
    if (i == j) {
      printf("%d ", a[i++]);
    } else {
      printf("%d ", a[i++]);
      printf("%d ", a[j--]);
    }
  }
  printf("\n");
}

void sliding_window(const int a[], const int &n, const int &window) {
  for (int i = 0; i <= n - window; i++) {
    for (int j = 0; j < window; j++) {
      printf("%d ", a[i + j]);
    }
    printf("\n");
  }
}

int main(int argc, char const *argv[]) {
  IOS;
  FIO;

  int n;
  scanf("%d", &n);

  int a[n];
  for (const int &ai : a) scanf("%d", &ai);

  forward_iteration(a, n);
  backward_iteration(a, n);
  bi_directional_iteration(a, n);
  sliding_window(a, n, 3);

  return 0;
}
