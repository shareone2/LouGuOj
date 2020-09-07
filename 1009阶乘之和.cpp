#include <iostream>
using namespace std;
int n, a[1000], num[1000]; 
int main() {
	cin >> n;
	a[0] = 1, a[1] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= a[0]; j++) { a[j] = a[j] * i; }
		for (int j = 1; j <= a[0]; j++) {
			if (a[j] < 10) { continue; }
			a[j + 1] = a[j + 1] + a[j] / 10;
			a[j] = a[j] % 10;
			if (j == a[0]) { a[0]++; }
		}
		for (int j = 1; j <= 65; j++) {
			num[j] = num[j] + a[j];
			num[j + 1] = num[j + 1] + num[j] / 10;
			num[j] = num[j] % 10;
		}
	}
	for (int j = 65, flog = 0; j >= 1; j--) { 
	    if (num[j] || flog) {
	    	flog = 1;
	    	cout << num[j];
		} 
	}
	cout << endl;
	return 0;
}
