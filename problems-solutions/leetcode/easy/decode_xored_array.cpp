#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

vector<int> decode(vector<int>& encoded, int first) {
  vector<int> orginal(encoded.size() + 1);
  orginal[0] = first;
  for (int i = 0; i < encoded.size(); i++) {
    orginal[i + 1] = orginal[i] ^ encoded[i];
  }
  return orginal;
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  int n, first;
  scanf("%d", &n);
  vector<int> encoded(n);
  for (const int& num : encoded) scanf("%d", &num);
  scanf("%d", &first);
  for (const int& num : decode(encoded, first)) printf("%d ", num);

  return 0;
}