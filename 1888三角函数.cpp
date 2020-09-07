#include <iostream>
using namespace std;
int a[5], mind = 2147000000, maxd = -1;
int gcd(int a, int b) { return !b ? a : gcd(b, a % b); }
int main() {
	cin >> a[1] >> a[2] >> a[3];
	for (int i = 1; i <= 3; i++) {
		if (a[i] < mind) { mind = a[i]; }
		if (a[i] > maxd) { maxd = a[i]; }
	}
	cout << mind / gcd(mind, maxd) << '/' << maxd / gcd(mind, maxd) << endl;
	return 0;
}
