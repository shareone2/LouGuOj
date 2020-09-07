#include <bits/stdc++.h>
using namespace std;
int main(){
	double a[10000];
	int i;
	for (i = 0; i <= 1000000; i++) {
		cin >> a[i];
		if (a[i] == 0) {
			break;
		}
	}
	for (int j = i - 1; j >= 0; j--) {
		if (j == 0) {
			cout << a[j];
		}
		else {
			cout << a[j] << " ";
		}
	}
	return 0;
} 
