#include <iostream>
#include <map>
using namespace std;
map <int, int> s;
int n, c, base;
long long ans;
int main() {
	cin >> n >> c;
	for (int i = 1; i <= n; i++) {
		cin >> base;
		s[base]++;
		ans += s[base - c] + s[base + c];
	}
	cout << ans << endl;
	return 0;
} 
