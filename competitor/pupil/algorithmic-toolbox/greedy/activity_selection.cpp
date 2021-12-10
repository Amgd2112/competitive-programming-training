#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("output.txt", "w", stdout);

#define N 40

struct activity {
  int start;
  int finish;
  activity(int start, int finish) {
    this->start = start;
    this->finish = finish;
  }
  bool operator<(const activity &a) { return finish < a.finish; }
};

vector<activity> generate_activities(int start, int end) {
  vector<activity> activities;
  for (int i = start; i < end; i++) {
    int s = i + rand() % (end - i);
    int e = s + rand() % (end - s);
    activities.push_back(activity(s, e + 1));
  }
  return activities;
}

int select_activities(vector<activity> activities) {
  // sort by finish time
  sort(activities.begin(), activities.end());

  int c = 0;
  int i = 0, j;
  int size = activities.size();
  while (i < size) {
    c++;  // add the current activity

    j = i + 1;
    // drop intersections
    while (j < size && activities[j].start < activities[i].finish) j++;
    i = j;
  }
  return c;
}

void display_activities(vector<activity> activities) {
  for (const activity &a : activities) {
    printf("(%d, %d) ", a.start, a.finish);
  }
  printf("\n");
}

int main() {
  IOS;
  FIO;

  while (true) {
    int n = rand() % N + 2;
    vector<activity> activities = generate_activities(1, n);
    display_activities(activities);

    int max_act = select_activities(activities);
    printf("Maximum number of activities: %d\n\n", max_act);
  }

  return 0;
}
