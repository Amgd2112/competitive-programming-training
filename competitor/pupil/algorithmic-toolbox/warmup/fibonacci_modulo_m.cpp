#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

bool is_sequence_repeated(vector<long long> a) {
  int s = a.size();
  int i = 0, j = s / 2;
  while (a[i++] == a[j++] && j < s) continue;
  if (j == s) return true;
  return false;
}

int fibonacci_under_modulo(long long n, long long m) {
  long long a = 0, b = 1;
  vector<long long> fibonacci_sequence = {a, b};
  int size = fibonacci_sequence.size();

  while (true) {
    a = fibonacci_sequence[size - 2];
    b = fibonacci_sequence[size - 1];
    if (a + b >= m) break;
    fibonacci_sequence.push_back(a + b);
    size++;
  }

  while (true) {
    a = fibonacci_sequence[size - 2];
    b = fibonacci_sequence[size - 1];
    fibonacci_sequence.push_back((a + b) % m);
    size++;

    if (is_sequence_repeated(fibonacci_sequence)) break;
  }

  return fibonacci_sequence[n % (size / 2)];
}

int main() {
  IOS;
  // FIO;

  long long n, m;
  scanf("%lld %lld\n", &n, &m);
  printf("%d\n", fibonacci_under_modulo(n, m));

  return 0;
}
