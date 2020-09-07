#include <iostream>
using namespace std;
int n, x, base = -1, cnt, ans;
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		x == base + 1 ? cnt++ : cnt = 1;
		if (cnt > ans) { ans = cnt; }
		base = x;
	}
	cout << ans << endl;
	return 0;
}
