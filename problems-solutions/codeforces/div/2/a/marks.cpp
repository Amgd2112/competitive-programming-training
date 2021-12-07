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

  int n, m;
  cin >> n >> m;
  cin.get();

  vector<string> marks(n);
  for (string &mark : marks) getline(cin, mark);

  vector<char> subjects(m, '0');
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (subjects[j] < marks[i][j]) subjects[j] = marks[i][j];
    }
  }

  int passed = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (subjects[j] == marks[i][j]) {
        passed++;
        break;
      };
    }
  }

  printf("%d\n", passed);

  return 0;
}