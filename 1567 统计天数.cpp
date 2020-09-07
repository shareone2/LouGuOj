#include <iostream>

using namespace std;

int main(){
	double a[100000];
	double b;
	double c = 1, d = 0;
	cin >> b;
	for (long long i = 0; i <= b - 1; i++) {
		cin >> a[i];
	}
	for (long long j = 0; j <= b - 2; j++) {
		if (a[j] < a[j + 1]) {
			c++;
		}
		else {
			c = 1;
		}
		if (c > d) {
			d = c;
		}
	}
	cout << d << endl;
	return 0;
} 
