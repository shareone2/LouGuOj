#include <iostream>
using namespace std;
int n, a, b, sum, base; 
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> b;
		base = base + a + b - 8;
		sum += base;
	}
	cout << sum << endl;
	return 0;
}
