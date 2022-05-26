#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

#define FIO                         \
  freopen("input.txt", "r", stdin); \
  // freopen("output.txt", "w", stdout);

class ParkingSystem {
 public:
  int big, medium, small;
  ParkingSystem(int big, int medium, int small) {
    this->big = big;
    this->medium = medium;
    this->small = small;
  }

  bool addCar(int carType) {
    if (carType == 1 && big) {
      big--;
      return true;
    } else if (carType == 2 && medium) {
      medium--;
      return true;
    } else if (carType == 3 && small) {
      small--;
      return true;
    } else {
      return false;
    }
  }
};

int main(int argc, char const* argv[]) {
  IOS;
  // FIO;

  int big, medium, small;
  scanf("%d%d%d", &big, &medium, &small);
  ParkingSystem* obj = new ParkingSystem(big, medium, small);

  int t, carType;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &carType);
    printf("%d\n", obj->addCar(carType));
  }

  return 0;
}