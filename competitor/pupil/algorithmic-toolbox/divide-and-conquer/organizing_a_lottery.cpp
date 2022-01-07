#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

enum Tag { Left, Point, Right };

struct Element {
  int value;
  Tag tag;
  int id;

  Element(int v = 0, Tag t = Left, int i = -1) {
    value = v;
    tag = t;
    id = i;
  }

  bool operator<(const Element &e) {
    if (value == e.value) return tag < e.tag;
    return value < e.value;
  }
};

void organize_lottery(Element data[], int points[], const int &n) {
  sort(data, data + n);
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (data[i].tag == Point) {
      points[data[i].id] = cnt;
    } else if (data[i].tag == Left) {
      cnt++;
    } else {
      cnt--;
    }
  }
  return;
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int s, p;
  scanf("%d %d", &s, &p);

  Element data[s * 2 + p];
  int j = 0;
  for (int l, r, i = 0; i < s; i++) {
    scanf("%d %d", &l, &r);
    data[j++] = Element(l, Left);
    data[j++] = Element(r, Right);
  }

  for (int x, i = 0; i < p; i++) {
    scanf("%d", &x);
    data[j++] = Element(x, Point, i);
  }

  int ans[p];
  organize_lottery(data, ans, s * 2 + p);
  for (int i = 0; i < p; i++) printf("%d ", ans[i]);

  return 0;
}