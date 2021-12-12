#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO freopen("input.txt", "r", stdin);

struct Segment {
  int a;
  int b;

  Segment(int a = 0, int b = 0) {
    this->a = a;
    this->b = b;
  }

  bool operator<(const Segment &segment) { return b < segment.b; }
};

vector<int> minimum_points(vector<Segment> segments) {
  sort(segments.begin(), segments.end());

  int n = segments.size();
  vector<int> points;
  int i = 0, j;
  while (i < n) {
    Segment itrsec = segments[i];  // intersection

    j = i + 1;
    while (j < n && itrsec.b <= segments[j].b && itrsec.b >= segments[j].a) {
      itrsec.a = max(itrsec.a, segments[j].a);
      itrsec.b = min(itrsec.b, segments[j].b);
      j++;
    }
    points.push_back(itrsec.a);

    i = j;
  }

  return points;
}

int main() {
  IOS;
  // FIO;

  int n;
  scanf("%d\n", &n);
  vector<Segment> segments(n);
  for (Segment &segment : segments) scanf("%d%d", &segment.a, &segment.b);

  vector<int> points = minimum_points(segments);
  printf("%d\n", points.size());
  for (int point : points) printf("%d ", point);

  return 0;
}