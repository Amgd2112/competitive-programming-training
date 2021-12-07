#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int main() {
  IOS;
  //   FIO;

  long long n, x;
  scanf("%lld %lld\n", &n, &x);
  string p;
  long long d = 0;
  while (n--) {
    getline(cin, p);
    stringstream s(p);
    char sign;
    s >> sign;
    long long order;
    s >> order;

    if (sign == '+')
      x += order;
    else if (x < order)
      d++;
    else
      x -= order;
  }

  printf("%lld %lld\n", x, d);

  return 0;
}