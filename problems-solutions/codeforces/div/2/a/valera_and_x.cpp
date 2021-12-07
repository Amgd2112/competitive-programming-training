#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

bool is_form_letter_x(vector<string> paper) {
  int n = paper.size();
  int xi = 0, xj = 0;
  unordered_set<char> us, x;
  for (int i = 0; i < n; i++) {
    xi = i;
    xj = n - i - 1;
    x.insert(paper[i][xi]);
    x.insert(paper[i][xj]);

    for (int j = 0; j < n; j++) {
      if (j == xi || j == xj) continue;
      us.insert(paper[i][j]);
    }
  }

  if (us.size() != 1) return false;
  if (x.size() != 1) return false;
  if (*(us.begin()) == *(x.begin())) return false;
  return true;
}

int main() {
  IOS;
  //   FIO;

  int n;
  cin >> n;
  cin.get();

  vector<string> paper(n);
  for (string &line : paper) getline(cin, line);
  printf("%s", is_form_letter_x(paper) ? "YES" : "NO");

  return 0;
}