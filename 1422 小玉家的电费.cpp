#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	double a;
	cin >> a; 
	if (a >= 0 && a <= 150) {
		a = a * 0.4463;
	}
	else {
		if (a <= 400) {
			double b = (a - 150) * 0.4663;
			a = 150 * 0.4463 + b;
		}
		else {
			double c = (a - 400) * 0.5663;
			a = c + 150 * 0.4463 + 250 * 0.4663;
		}
	}
	printf("%.1lf", a);
	return 0;
} 
