#include <iostream>
using namespace std;
int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int sum1, sum2;
	sum1 = a * 60 + b;
	sum2 = c * 60 + d;
	int sum3;
	sum3 = sum2 - sum1;
	int e, f;
	e = sum3 / 60;
	f = sum3 % 60;
	cout << e << " " << f << endl;
	return 0;
} 
