#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

enum Tag { Left, Right };

struct Element {
  int x;
  Tag tag;

  Element(int v = 0, Tag t = Left) {
    x = v;
    tag = t;
  }

  bool operator<(const Element &e) {
    if (x == e.x) return tag < e.tag;
    return x < e.x;
  }
};

struct Range {
  int left, right, lines;

  Range(int l = 0, int r = 0, int c = 0) {
    left = l;
    right = r;
    lines = c;
  }
};

vector<Range> organize(Element elements[], const int &n) {
  sort(elements, elements + n);

  vector<Range> ranges;
  stack<Element> s;

  for (int i = 0; i < n; i++) {
    if (s.empty()) {
      s.push(elements[i]);
    } else if (elements[i].tag == Left) {
      if (elements[i].x - 1 >= s.top().x) {
        ranges.push_back(Range(s.top().x, elements[i].x - 1, s.size()));
      }
      s.push(elements[i]);
    } else {
      if (s.top().x <= elements[i].x) {
        ranges.push_back(Range(s.top().x, elements[i].x, s.size()));
      }

      s.pop();

      if (!s.empty()) {
        s.top().x = elements[i].x + 1;
      }
    }
  }

  return ranges;
}

int search(const vector<Range> &ranges, const int &point) {
  int begin = 0, end = ranges.size() - 1, mid;
  while (begin <= end) {
    mid = begin + (end - begin) / 2;
    if (point >= ranges[mid].left && point <= ranges[mid].right) {
      return ranges[mid].lines;
    } else if (point < ranges[mid].left) {
      end = mid - 1;
    } else {
      begin = mid + 1;
    }
  }

  return 0;
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int s, p;
  scanf("%d %d", &s, &p);

  Element data[s * 2];

  for (int l, r, i = 0; i < s; i++) {
    scanf("%d %d", &l, &r);
    data[i * 2] = Element(l, Left);
    data[i * 2 + 1] = Element(r, Right);
  }

  int points[p];
  for (int &point : points) scanf("%d", &point);

  vector<Range> ranges = organize(data, s * 2);
  unordered_map<int, int> ans;
  for (const int &point : points) {
    if (ans.find(point) == ans.end()) {
      ans[point] = search(ranges, point);
    }
    printf("%d ", ans[point]);
  }

  return 0;
}