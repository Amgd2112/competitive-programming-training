#include <bits\stdc++.h>
using namespace std;

/*
 *   Escape sequence character represented
 *   \a	Alert (bell, alarm)
 *   \b	Backspace
 *   \f	Form feed (new page)
 *   \n	New-line
 *   \r	Carriage return
 *   \t	Horizontal tab
 *   \v	Vertical tab
 *   \'	Single quotation mark
 *   \"	Double quotation mark
 *   \?	Question mark
 *   \\	Backslash
 */

int main(int argc, char const *argv[]) {
  char quote = '\'';
  cout << quote << endl;

  cout << "Electronic" << '\t' << "Clinic" << '\n';
  cout << "Electronic\tClinic\n";  // insert a new line characters
  cout << "welcome" << endl;       // insert a new line and flushes the stream

  return 0;
}