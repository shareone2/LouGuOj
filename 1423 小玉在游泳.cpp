#include <iostream>
using namespace std;
int main(){
	double n;
	cin >> n;
	double sum = 2;
	double a = 2;
	for (int i = 1; i <= 1000000000; i++) {
		if (sum >= n) {
			cout << i << endl;
			break;
		}
		else {
			a = a * 0.98;
			sum = sum + a;
		}
	}
	return 0;
} 
