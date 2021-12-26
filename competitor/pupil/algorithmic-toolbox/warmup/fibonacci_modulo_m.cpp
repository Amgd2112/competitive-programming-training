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

int fibonacci_under_modulo(long long n, int m) {
  vector<int> sequence = fibonacci_sequence_modulo(m);
  return sequence[n % sequence.size()];
}

int main() {
  IOS;
  // FIO;

  long long n, m;
  scanf("%lld %lld\n", &n, &m);
  printf("%d\n", fibonacci_under_modulo(n, m));

  return 0;
}
