#include <iostream>
#include <iomanip>
using namespace std;
int r, n, num[30];
void dfs(int a, int cnt);
int main() {
	cin >> n >> r;
	dfs(1, 1);
	return 0;
}
void dfs(int a, int cnt) {
	if (cnt == r + 1) {
		for (int i = 1; i <= r; i++) { cout << setw(3) << num[i]; }
		cout << endl;
	} else {
        for (int i = a; i <= n; i++) {
		    num[cnt] = i;
		    dfs(i + 1, cnt + 1);
	    }
	}
	return ;
}
