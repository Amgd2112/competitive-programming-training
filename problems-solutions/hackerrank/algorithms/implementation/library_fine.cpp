#include <bits/stdc++.h>
using namespace std;

#define FINE 0
#define DAY_FINE 15
#define MONTH_FINE 500
#define YEAR_FINE 10000

class date {
 public:
  int day, month, year;
  date(int day = 1, int month = 1, int year = 1) {
    this->day = day;
    this->month = month;
    this->year = year;
  }
};

int library_fine(date returned_date, date due_date) {
  if (returned_date.year > due_date.year)
    return YEAR_FINE;
  else if (returned_date.month > due_date.month &&
           returned_date.year == due_date.year)
    return MONTH_FINE * (returned_date.month - due_date.month);
  else if (returned_date.day > due_date.day &&
           returned_date.month == due_date.month &&
           returned_date.year == due_date.year)
    return DAY_FINE * (returned_date.day - due_date.day);
  else
    return FINE;
}

int main() {
  date date1, date2;
  scanf("%d %d %d\n", &date1.day, &date1.month, &date1.year);
  scanf("%d %d %d\n", &date2.day, &date2.month, &date2.year);
  printf("%d\n", library_fine(date1, date2));

  return 0;
}