#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

void setCombinations(vector<int> &candidates, vector<vector<int>> &combinations,
                     vector<int> &current, int &target, int idx) {
  if (idx >= candidates.size() || target < 0) {  // out of range, greater than target
    return;
  } else if (target == 0) {  // combination sum equal to target
    combinations.push_back(current);
  } else {
    current.push_back(candidates[idx]);
    int remaining = target - candidates[idx];
    setCombinations(candidates, combinations, current, remaining, idx);  // pick
    current.pop_back();  // back tracking
    setCombinations(candidates, combinations, current, target, idx + 1);  // leave
  }
}

vector<vector<int>> combinationSum(vector<int> &candidates, int &target) {
  sort(candidates.begin(), candidates.end());
  vector<vector<int>> combinations;
  vector<int> temp;
  setCombinations(candidates, combinations, temp, target, 0);
  return combinations;
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int n;
  scanf("%d", &n);

  vector<int> candidates(n);
  int target;
  scanf("%d", &target);
  for (const int &candidate : candidates) scanf("%d", &candidate);
  vector<vector<int>> combinations = combinationSum(candidates, target);
  for (vector<int> &combination : combinations) {
    for (const int &num : combination) printf("%d ", num);
    printf("\n");
  }

  return 0;
}