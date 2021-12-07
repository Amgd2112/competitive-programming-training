#include <bits/stdc++.h>
using namespace std;

unordered_map<int, string> time_map = {
    {0, "o\'"},      {1, "one"},        {2, "two"},       {3, "three"},
    {4, "four"},     {5, "five"},       {6, "six"},       {7, "seven"},
    {8, "eight"},    {9, "nine"},       {10, "ten"},      {11, "eleven"},
    {12, "twelve"},  {13, "thirteen"},  {14, "fourteen"}, {15, "quarter"},
    {16, "sixteen"}, {17, "seventeen"}, {18, "eighteen"}, {19, "nineteen"},
    {20, "twenty"},  {30, "thirty"},    {40, "forty"},    {50, "fifty"},
};

string convert_time_to_words(int t) {
  char space = ' ';
  if (t < 20)
    return time_map[t] + space;
  else if (t < 30)
    return time_map[t - t % 10] + space + time_map[t % 10] + space;
  else if (t == 30)
    return "half ";
  else
    return convert_time_to_words(60 - t);
}

string time_in_words(int h, int m) {
  string past = "past ", to = "to ", minute = "minute ", minutes = "minutes ";
  if (m == 0)
    return convert_time_to_words(h) + convert_time_to_words(m) + "clock";

  else if (m == 1)
    return convert_time_to_words(m) + minute + past + convert_time_to_words(h);
  else if (m == 59)
    return convert_time_to_words(m) + minute + to +
           convert_time_to_words((h + 1) % 12);

  else if (m == 15 || m == 30)
    return convert_time_to_words(m) + past + convert_time_to_words(h);
  else if (m == 45)
    return convert_time_to_words(m) + to + convert_time_to_words((h + 1) % 12);

  else if (m < 30)
    return convert_time_to_words(m) + minutes + past + convert_time_to_words(h);
  else
    return convert_time_to_words(m) + minutes + to +
           convert_time_to_words((h + 1) % 12);
}

int main() {
  int h, m;
  scanf("%d\n%d\n", &h, &m);
  string words = time_in_words(h, m);
  printf("%s\n", words.c_str());

  return 0;
}