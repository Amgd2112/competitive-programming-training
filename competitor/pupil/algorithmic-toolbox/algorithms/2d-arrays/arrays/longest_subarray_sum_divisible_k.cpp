#include <bits/stdc++.h>
using namespace std;

#define OJ                          \
  freopen("input.txt", "r", stdin); \
  freopen("output.txt", "w", stdout);
#define FIO                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

int longSubarrWthSumDivByK(int arr[], int n, int k) {
  // unordered map 'um' implemented as
  // hash table
  unordered_map<int, int> um;

  // 'mod_arr[i]' stores (sum[0..i] % k)
  int mod_arr[n], max = 0;
  int curr_sum = 0;

  // traverse arr[] and build up the
  // array 'mod_arr[]'
  for (int i = 0; i < n; i++) {
    curr_sum += arr[i];
    // as the sum can be negative, taking modulo twice
    mod_arr[i] = ((curr_sum % k) + k) % k;
  }

  for (int i = 0; i < n; i++) printf("%d ", mod_arr[i]);
  printf("\n");

  for (int i = 0; i < n; i++) {
    // if true then sum(0..i) is divisible
    // by k
    if (mod_arr[i] == 0)
      // update 'max'
      max = i + 1;

    // if value 'mod_arr[i]' not present in 'um'
    // then store it in 'um' with index of its
    // first occurrence
    else if (um.find(mod_arr[i]) == um.end())
      um[mod_arr[i]] = i;

    else
        // if true, then update 'max'
        if (max < (i - um[mod_arr[i]]))
      max = i - um[mod_arr[i]];
  }

  // required length of longest subarray with
  // sum divisible by 'k'
  return max;
}

int divisible_subset(int s[], int n, int k) {
  int modulos[k] = {0};
  for (int i = 0; i < n; i++) modulos[s[i] % k] += 1;
  for (int i = 0; i < k; i++) printf("%d ", modulos[i]);
  printf("\n");

  int subset = 0;
  if (modulos[0]) subset += (modulos[0] % 2 == 0) ? modulos[0] : modulos[0] - 1;

  for (int i = 1; i < k / 2 + 1; i++) {
    if (modulos[i] && modulos[k - i]) {
      subset += min(modulos[i], modulos[k - i]) * 2;
    }
    // subset += (k%2 == 0 && i == k/2 && modulos[i])? 1: max(modulos[i],
    // modulos[k - i]); // complement
  }

  return subset;
}

int main() {
  OJ;

  int n, k;
  scanf("%d %d\n", &n, &k);
  int s[n];
  for (int i = 0; i < n; i++) scanf("%d", &s[i]);
  int longest_subset = divisible_subset(s, n, k);
  int longest_subset1 = longSubarrWthSumDivByK(s, n, k);
  printf("%d\n", longest_subset);
  printf("%d\n", longest_subset1);

  return 0;
}
