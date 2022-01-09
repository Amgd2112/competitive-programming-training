#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

typedef struct Activity {
  int start, finish;
  Activity(const int& _start = 0, const int& _finish = 0) {
    start = _start;
    finish = _finish;
  }

  // // activity(a) < activity(b) = ?
  bool operator<(const Activity& a) { return start < a.start; }
} activity;

bool compare_start(const Activity& a, const Activity& b) {
  return a.start < b.start;
}

bool compare_finish(const Activity& a, const Activity& b) {
  return a.finish < b.finish;
}

int main(int argc, char const* argv[]) {
  IOS;
  FIO;

  int n;
  scanf("%d", &n);

  activity a[n];

  for (const activity& ai : a) {
    scanf("%d %d\n", &ai.start, &ai.finish);
  }

  sort(a, a + n);  // default operator
  // sort(a, a + n, compare_finish); // using compare function

  for (const activity& ai : a) {
    printf("%d %d\n", ai.start, ai.finish);
  }

  return 0;
}
