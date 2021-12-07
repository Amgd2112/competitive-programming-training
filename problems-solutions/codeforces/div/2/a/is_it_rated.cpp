#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

int main() {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);

  vector<int> rates;
  int rate1, rate2;
  while (n--) {
    scanf("%d%d", &rate1, &rate2);
    if (rate1 != rate2) break;
    rates.push_back(rate1);
  }

  string output = "rated";
  if (n == -1) {
    output = "maybe";
    vector<int> sorted_rates(rates);
    sort(sorted_rates.begin(), sorted_rates.end());
    reverse(rates.begin(), rates.end());
    for (int i = 0; i < rates.size(); i++) {
      if (sorted_rates[i] != rates[i]) {
        output = "unrated";
        break;
      }
    }
  }
  printf("%s\n", output.c_str());

  return 0;
}