#include <iostream>
using namespace std;
int n, k;
int dfs(int a, int sum);
int main() {
	cin >> n >> k;
	cout << dfs(n, n) << endl;
	return 0;
}
int dfs(int a, int sum) {
	if (a >= k) { sum += dfs(a / k + a % k, a / k); }
	return sum;
}
