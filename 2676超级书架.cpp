#include <iostream>
#include <algorithm> 
using namespace std;
int num[20005], n, b, cnt = 0;
int cmp(int a, int b) { return a > b; }
int main() {
	cin >> n >> b;
	for (int i = 1; i <= n; i++) {
		cin >> num[i];
	}
	sort(num + 1, num + 1 + n, cmp);
	for (int i = 1; i <= n; i++) {
		if (b > 0) {
			b-=num[i];
			cnt++;
		} else {
			break;
		}
	}
	cout << cnt << endl;
	return 0;
} 
