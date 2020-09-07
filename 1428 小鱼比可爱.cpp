#include <iostream>

using namespace std;

int main(){
	int a[10000];
	int n; 
	cin >> n;
	for (int i = 0; i <= n - 1; i++) {
		cin >> a[i];
	}
	int m = 0;
	for (int i = 0; i <= n - 1; i++) {
		for (int j = 0; j < i; j++) {
			if (a[j] < a[i]) {
				m++;
			}
		}
		if (i == n - 1) {
			cout << m;
		}
		else {
			cout << m << " ";
			m = 0;
		}
	}
	return 0;
} 
