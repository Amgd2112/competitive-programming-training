#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

bool is_sequence_repeated(vector<int> a) {
  int n = a.size();
  int i = 0, j = n / 2;
  while (a[i++] == a[j++] && j < n) continue;
  if (j == n) return true;
  return false;
}

vector<int> fibonacci_sequence_modulo(int m) {
  int a = 0, b = 1;
  vector<int> sequence = {a, b};
  int size = sequence.size();

  while ((a + b) < m) {
    sequence.push_back(a + b);
    size++;
    a = sequence[size - 2];
    b = sequence[size - 1];
  }

  while (!is_sequence_repeated(sequence)) {
    a = sequence[size - 2];
    b = sequence[size - 1];
    sequence.push_back((a + b) % m);
    size++;
  }

  return vector<int>(sequence.begin(), sequence.begin() + size / 2);
}

int last_digit_sum_fibonacci_sequence(long long n) {
  vector<int> sequence = fibonacci_sequence_modulo(10);

  int size = sequence.size();
  vector<int> accumulated_sequence(size);
  int acc = 0;
  for (int i = 0; i < size; i++) {
    acc += sequence[i];
    acc %= 10;
    accumulated_sequence[i] = acc;
  }
  return accumulated_sequence[n % size];
}

int main() {
  IOS;
  // FIO;

  long long n;
  scanf("%lld\n", &n);

  int digit = last_digit_sum_fibonacci_sequence(n);
  printf("%d\n", digit);

  return 0;
}
