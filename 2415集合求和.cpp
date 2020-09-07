#include <iostream>
using namespace std;
int a, cnt;
long long sum = 0, ss = 1;
int main() {
	while (cin >> a) {
		sum += a;
		cnt++;
	} 
	for (int i = 1; i <= cnt - 1; i++) { ss = ss * 2; }
	cout << sum * ss << endl;
	return 0;
}
