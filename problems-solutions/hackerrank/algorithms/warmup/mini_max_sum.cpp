#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

#define N 5

void mini_max_sum(const int a[]) {
  int max_element = INT_MIN, min_element = INT_MAX;
  long long total = 0;

  for (int i = 0; i < N; i++) {
    total += (long long)a[i];
    max_element = max(max_element, a[i]);
    min_element = min(min_element, a[i]);
  }

  printf("%lld %lld\n", total - max_element, total - min_element);

  return;
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int a[N];
  for (const int &ai : a) scanf("%d", &ai);
  mini_max_sum(a);

  return 0;
}