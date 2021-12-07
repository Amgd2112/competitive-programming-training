#include <bits/stdc++.h>
using namespace std;

unordered_map<int, string> POSSIBILITY = {{0, "Impossible"}, {1, "Possible"}};
typedef vector<vector<int>> vv32;

bool organizing_containers(vv32 matrix, vv32 containers) {
  int matrix_sum[matrix.size()], container_sum[matrix.size()];
  for (int i = 0; i < matrix.size(); i++) {
    matrix_sum[i] = accumulate(matrix[i].begin(), matrix[i].end(), 0);
    container_sum[i] =
        accumulate(containers[i].begin(), containers[i].end(), 0);
  }

  sort(matrix_sum, matrix_sum + matrix.size());
  sort(container_sum, container_sum + matrix.size());

  for (int i = 0; i < matrix.size(); i++)
    if (matrix_sum[i] != container_sum[i]) return false;

  return true;
}

int main() {
  int test_cases;
  scanf("%d\n", &test_cases);
  while (test_cases--) {
    int n;
    scanf("%d\n", &n);
    vv32 matrix(n, vector<int>(n, 0)), containers(n, vector<int>(n, 0));
    for (int temp, i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        scanf("%d", &temp);
        containers[i][j] = temp;
        matrix[j][i] = temp;
      }
    }
    cout << POSSIBILITY[organizing_containers(matrix, containers)] << endl;
  }
  return 0;
}