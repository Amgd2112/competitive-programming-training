#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

#define N 3

pair<int, int> compare_the_triplets(const int a[], const int b[]) {
  int alice_score = 0, bob_score = 0;

  for (int i = 0; i < N; i++) {
    if (a[i] > b[i]) {
      alice_score++;
    } else if (a[i] < b[i]) {
      bob_score++;
    }
  }

  return pair<int, int>(alice_score, bob_score);
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int a[N], b[N];
  for (const int &ai : a) scanf("%d", &ai);
  for (const int &bi : b) scanf("%d", &bi);

  pair<int, int> res = compare_the_triplets(a, b);
  printf("%d %d\n", res.first, res.second);

  return 0;
}