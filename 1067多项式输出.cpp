#include <iostream>
#include <cmath>
using namespace std;
int n, a;
int main() {
	cin >> n;
	for (int i = n; i >= 0; i--) {
		cin >> a;
		if (a == 0) { continue; }
		if (i != n && a > 0) { cout << '+'; }
		if (a == -1 && i != 0) { cout << '-'; }
		if (abs(a) > 1 || i == 0) { cout << a; }
		if (i > 1) { cout << "x^" << i; }
		else if (i == 1) { cout << "x"; }
	}
	cout << endl;
	return 0;
}
