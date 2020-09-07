#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int m, n, k, l, d, x[1005], y[1005], flog[1005];
void cmp(int *a, int mn, int kl);
int main() {
	cin >> m >> n >> k >> l >> d;
	for (int i = 1; i <= d; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		x1 == x2 ? (y[min(y1, y2)]++) : (x[min(x1, x2)]++); 
	}
	cmp(x, m, k);
	cmp(y, n, l);
	return 0;
}
void cmp(int *a, int mn, int kl) {
	for (int i = 1; i <= kl; i++) {
		int maxd = 0, base;
		for (int j = 1; j <= mn; j++) {
			if (a[j] > maxd) {
				maxd = a[j];
				base = j;
			}
		}
		flog[base] = 1;
		a[base] = 0;
	}
	for (int i = 1; kl > 0; i++) {
		if (flog[i]) {
			cout << i << ' ';
			kl--; 
		}
	}
	cout << endl;
	memset(flog, 0, sizeof(flog));
	return ;
}
