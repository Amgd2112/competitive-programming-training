#include <bits/stdc++.h>
using namespace std;

long long repeated_string(string s, long long n) {
  int a_count = count(s.begin(), s.end(), 'a');
  long long div = n / s.length();
  long long counter = a_count * div;

  long long i = 0;
  while (i + div * s.length() < n) {
    if (s[i++] == 'a') counter++;
  }

  return counter;
}

int main() {
  string s;
  getline(cin, s);
  long long n;
  scanf("%lld\n", &n);

  long long number_of_as = repeated_string(s, n);
  printf("%lld\n", number_of_as);

  return 0;
}