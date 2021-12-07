#include <bits/stdc++.h>
using namespace std;

vector<int> circular_array_rotation(vector<int> array, int k) {
  if (k >= array.size()) k %= array.size();
  for (int i = 0; i != k; ++i) array.push_back(array[i]);
  return {array.begin() + k, array.end()};
}

int main() {
  int n, k, q;
  scanf("%d %d %d", &n, &k, &q);
  vector<int> array(n);
  while (n) scanf("%d", &array[--n]);
  vector<int> rotated_array = circular_array_rotation(array, k);

  for (int query, i = 0; i < q; ++i) {
    scanf("%d", &query);
    printf("%d\n", rotated_array[rotated_array.size() - 1 - query]);
  }

  return 0;
}