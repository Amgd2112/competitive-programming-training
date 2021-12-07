#include <bits/stdc++.h>
using namespace std;

bool is_modified_kaprekar_number(long long n) {
  int n_digits = (int)log10(n) + 1;
  int right = (int)floor(pow(10, n_digits));
  long long n_squared = n * n;

  // left part + right part
  return n_squared / right + n_squared % right == n;
}

vector<int> kaprekar_numbers(int p, int q) {
  vector<int> modified_kaprekar_numbers;
  for (int i = p; i <= q; i++)
    if (is_modified_kaprekar_number(i)) modified_kaprekar_numbers.push_back(i);
  return modified_kaprekar_numbers;
}

int main() {
  int p, q;
  scanf("%d\n%d\n", &p, &q);
  vector<int> seq = kaprekar_numbers(p, q);
  if (seq.size())
    for (int digit : seq) printf("%d ", digit);
  else
    printf("%s", "INVALID RANGE");

  return 0;
}