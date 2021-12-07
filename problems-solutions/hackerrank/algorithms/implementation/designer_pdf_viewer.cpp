#include <bits/stdc++.h>
using namespace std;

string alphabet = "abcdefghijklmnopqrstuvwxyz";
map<char, int> heights;

int designer_pdf_viewer(string word) {
  int count = 0, maximum = 0;
  for (char c : word) {
    if (c == '\0') break;
    count += 1;
    if (heights[c] > maximum) maximum = heights[c];
  }
  return maximum * count;
}

int main() {
  for (int height, i = 0; i < 26; i++) {
    scanf("%d", &height);
    heights[alphabet[i]] = height;
  }

  cin.get();
  string word;
  getline(cin, word);
  int result = designer_pdf_viewer(word);
  printf("%d\n", result);

  return 0;
}