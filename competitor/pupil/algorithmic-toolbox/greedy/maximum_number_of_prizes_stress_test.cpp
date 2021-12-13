#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  freopen("output.txt", "w", stdout);

#define N 1000000000

vector<int> maximum_prizes1(int n) {
  vector<int> prize;

  int limit = (-1 + sqrt(1 + 4 * 2 * double(n))) / 2;
  for (int x = 1; x < limit; x++) {
    prize.push_back(x);
    n -= x;
  }
  prize.push_back(n);

  return prize;
}

bool has(const unordered_set<int> &s, const int &target) {
  return s.find(target) == s.end();
}

unordered_set<int> maximum_prizes2(int n) {
  unordered_set<int> prizes;

  int x = 1;
  while (x < n && n - x != x && has(prizes, x) && has(prizes, n - x)) {
    prizes.insert(x);
    n -= x;
    x++;
  }

  if (n != 0) prizes.insert(n);
  return prizes;
}

int main() {
  IOS;
  FIO;

  int n, s1, s2, t1, t2;
  vector<int> prizes1;
  unordered_set<int> prizes2;

  while (true) {
    n = rand() % N + 1;
    printf("%d, ", n);

    prizes1 = maximum_prizes1(n);
    prizes2 = maximum_prizes2(n);

    s1 = prizes1.size();
    s2 = prizes2.size();

    t1 = accumulate(prizes1.begin(), prizes1.end(), 0);
    t2 = accumulate(prizes2.begin(), prizes2.end(), 0);

    if (s1 == s2 && t1 == t2) {
      printf("OK\n");
      continue;
    }

    printf("Wrong Answer: (f1.size:%d, f2.size:%d)\n", s1, s2);
    printf("(f1.sum:%d, f2.sum:%d)\n", t1, t2);

    break;
  }

  return 0;
}
