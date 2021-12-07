#include <bits/stdc++.h>
using namespace std;

void acm_team(vector<string> topics, int n, int m) {
  int max_topics = 0, teams = 0;

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      int sum_topics = 0;
      for (int k = 0; k < m; k++)
        sum_topics += topics[i][k] == '1' || topics[j][k] == '1';

      if (max_topics == sum_topics) teams++;

      if (max_topics < sum_topics) {
        max_topics = sum_topics;
        teams = 1;
      }
    }
  }

  printf("%d\n%d\n", max_topics, teams);
}

int main() {
  int n, m;
  scanf("%d %d\n", &n, &m);
  vector<string> topics(n);
  for (string &topic : topics) getline(cin, topic);

  acm_team(topics, n, m);

  return 0;
}