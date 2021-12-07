#include <bits/stdc++.h>
using namespace std;

bool is_even(int n) { return n % 2 == 0; }

int min_number_of_pages(int n, int p) {
  int pages_right, pages_left;

  if (is_even(n) && !is_even(p)) {
    pages_right = (n - p) / 2 + 1;
    pages_left = n / 2 - pages_right;
  } else {
    pages_right = (n - p) / 2;
    pages_left = (n / 2) - pages_right;
  }

  return min(pages_left, pages_right);
}

int main() {
  int n, p;
  scanf("%d %d\n", &n, &p);
  printf("%d\n", min_number_of_pages(n, p));

  return 0;
}