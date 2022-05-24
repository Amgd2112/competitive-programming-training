#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

bool isPalindrome(int x) {
  string nums = to_string(x);
  int begin = 0, end = nums.size() - 1;
  while (begin < end) {
    if (nums[begin] != nums[end]) {
      return false;
    }
    begin++;
    end--;
  }
  return true;
}

int main(int argc, char const *argv[]) {
  IOS;
  // FIO;

  int x;
  scanf("%d", &x);
  printf("%s\n", isPalindrome(x) ? "true" : "false");

  return 0;
}