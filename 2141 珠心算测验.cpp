#include <iostream>

using namespace std;

int main(){
	int a[10000];
	int n;
	cin >> n;
	for (int i = 0; i <= n - 1; i++) {
		cin >> a[i];
	}
	int b = 0;
	int flog = 0;
	int x, y;
	for (int i = 0; i <= n - 1; i++) {
		for (int j = 0; j <= n - 1; j++) {
			for (int m = 0; m <= n - 1; m++) {
				if ((a[i] == a[j] + a[m]) && (a[j] != a[m]) && flog == 0) {
					b++;
					flog = 1;
					x = a[j];
					y = a[m];
				}
				if ( (a[i] == a[j] + a[m]) && ( (a[j] != x && a[j] != y) || (a[m] != x && a[m] != y) ) && a[j] != a[m]) {
					b++;
					x = a[j];
					y = a[m];
				}
			}
		}
	}
	cout << b << endl;
	return 0;
} 
