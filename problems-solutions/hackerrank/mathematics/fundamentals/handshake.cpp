#include <bits/stdc++.h>
using namespace std;

#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

int sn(double n, double a1, double an) { return n * ((a1 + an) / 2); }

int main() {
	IOS;

	int n, t;
	scanf("%d", &t);
	while (scanf("%d", &n), t--) {
		printf("%d\n", sn(n, 0, n - 1));
	}

	return 0;
}