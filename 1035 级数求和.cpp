#include <iostream>
using namespace std;
int main(){
	int k;
	cin >> k;
	double n = 0;
	for (int i = 1; i <= 1000000; i++) {
		n = n + 1.0 / i;
		if (n > k) {
			cout << i << endl;
			break;
		}
	}
	return 0;
} 
