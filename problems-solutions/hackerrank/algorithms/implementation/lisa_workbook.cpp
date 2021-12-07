#include <bits/stdc++.h>
using namespace std;

int get_number_of_special_problems(vector<int> arr, int n, int k) {
  int special_problems = 0;
  int start = 1, end = 0;
  for (int &p : arr) {
    end = start + p / k;
    if (p % k == 0) end--;

    int first_problem = 1, last_problem = k;
    for (int i = start; i <= end; i++) {
      special_problems += first_problem <= i && i <= min(last_problem, p);
      first_problem = last_problem + 1;
      last_problem += k;
    }

    start = end + 1;
  }

  return special_problems;
}

int main() {
  int n, k;
  scanf("%d %d\n", &n, &k);
  vector<int> arr(n);
  for (int &num : arr) scanf("%d ", &num);
  int special_problems = get_number_of_special_problems(arr, n, k);
  printf("%d\n", special_problems);

  return 0;
}