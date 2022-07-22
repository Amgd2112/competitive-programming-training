#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

typedef struct WordInfo {
  int cnt[26] = {0};
  WordInfo(string word) {
    for (const char& letter : word) {
      int position = (letter - 'a');
      this->cnt[position]++;
    }
  }

  bool match(WordInfo& word) {
    bool isAnagram = true;
    for (int i = 0; (i < 26) && isAnagram; i++) {
      isAnagram &= (this->cnt[i] == word.cnt[i]);
    }
    return isAnagram;
  }

} wordInfo;

bool vis[10000] = {false};
vector<vector<string>> groupAnagrams(vector<string>& strs) {
  vector<wordInfo> info;
  for (string str : strs) info.push_back(wordInfo(str));

  vector<vector<string>> groups;
  for (int i = 0; i < strs.size(); i++) {
    if (vis[i]) continue;

    vector<string> group = {strs[i]};
    for (int j = i + 1; j < strs.size(); j++) {
      if (vis[j]) continue;

      if (info[i].match(info[j])) {
        group.push_back(strs[j]);
        vis[j] = true;
      }
    }

    groups.push_back(group);
    vis[i] = true;
  }

  return groups;
}

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  return 0;
}