#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> convert_to_table(string message) {
  int rows = floor(sqrt(message.length()));
  int columns = ceil(sqrt(message.length()));
  // ensure that rows * columns >= L
  while (rows * columns < message.length()) {
    if (rows < columns)
      rows++;
    else
      columns++;
  }

  // insert into the rotated table
  vector<vector<char>> table(columns, vector<char>(rows, ' '));
  for (int i = 0, j = 0; i < message.length(); i++) {
    table[i % columns][j] = message[i];
    if (i % columns == columns - 1) j++;
  }

  return table;
}

string encryption(string message) {
  // drop spaces
  message.erase(remove(message.begin(), message.end(), ' '), message.end());

  // combine rows
  string encoded_message = "";
  vector<vector<char>> table = convert_to_table(message);
  for (vector<char> row : table) {
    for (char c : row) {
      if (c == ' ') continue;
      encoded_message += c;
    }
    encoded_message += ' ';
  }

  return encoded_message;
}

int main() {
  string message;
  getline(cin, message);
  string encoded_message = encryption(message);
  printf("%s\n", encoded_message.c_str());

  return 0;
}