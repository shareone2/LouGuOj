#include <iostream>
#include <cmath>
using namespace std;
int n, m, w[10008], flog[105], cnt;
int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) { cin >> w[i]; }
	for (int i = 1; i <= n; cnt++) {
		for (int j = 1; j <= m; j++) {
			if (flog[j] == 0) { flog[j] = w[i++]; }
			flog[j]--;
		}
	}
	for (int i = 1; i <= m; i++) { flog[0] = max(flog[0], flog[i]); }
	cout << flog[0] + cnt << endl;
	return 0;
} 
