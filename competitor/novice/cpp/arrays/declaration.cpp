#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

int main(int argc, char const *argv[]) {
  IOS;
  FIO;

  int n;
  scanf("%d", &n);

  // declare array of n integers
  int arr[n];  // array without initialization

  // input each index of the array
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  /*
   *  # for each var in arr with read only
   *  for (const int &x : arr) scanf("%d ", &x);
   */

  // diplay each element in an array
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  /*
   *  # for each var in arr with read only
   *  for (const int &x : arr) printf("%d ", x);
   */

  /*
   *  char s[] = "Amgd";  // {'a', 'm', 'g', 'd'}
   *  printf("%s\n", s);
   */

  /*
   * pointer arithmetic
   * arr[i=4] => address(arr) + sizeof(int) * 4
   * arr[i=4] => 101 + 3 = 104
   *
   * ref(a) + 4 = ref(a[5])
   */

  // declare array with memset
  int a[n];
  memset(a, 0, sizeof(int) * n);
  for (const int &ai : a) printf("%d ", ai);
  printf("\n");

  /*
   *
   *  memset(a, -1, sizeof(int) * (n / 2));
   *  memset(a + (n / 2), 0, sizeof(int) * (n / 2));
   *  for (const int &ai : a) printf("%d ", ai);
   */

  return 0;
}