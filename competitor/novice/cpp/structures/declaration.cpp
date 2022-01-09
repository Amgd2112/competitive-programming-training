#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

struct Animal {
  char name[20], species[20];
  int age, weight, no_legs;
  bool has_tail;

  Animal(const char _name[], const char _species[], const int &_age,
         const int &_weight, const int &_no_legs, const bool &_has_tail) {
    strcpy(name, _name);
    strcpy(species, _species);
    age = _age;
    weight = _weight;
    no_legs = _no_legs;
    has_tail = _has_tail;
  }
};

int main(int argc, char const *argv[]) {
  IOS;
  FIO;

  char name[] = "Bosy", species[] = "Mammals";
  Animal cat = Animal(name, species, 2, 7, 4, true);
  printf("%d\n", cat.age);
  printf("%s\n", cat.name);

  return 0;
}