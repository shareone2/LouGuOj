#include <iostream>
using namespace std;
int base, x, n;
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> base;
		x ^= base;
	} 
	cout << x << endl;
	return 0;
}  
