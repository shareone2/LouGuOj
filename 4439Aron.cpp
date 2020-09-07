#include <iostream>
using namespace std;
int n, cnt = 1;
char people, base;
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> people;
		if (people == base) {
			continue;
		}
		cnt++;
		base = people;
	}
	cout << cnt << endl;
	return 0;
}
