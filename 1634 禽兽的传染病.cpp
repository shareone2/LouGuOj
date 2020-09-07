#include <bits/stdc++.h>
using namespace std;
int main(){
	long long x, n, sum = 1;
	cin >> x >> n;
	for (long long i = 1 ; i <= n; i++) {
		sum = sum * x + sum;
	}
	cout << sum << endl;
	return 0;
} 
