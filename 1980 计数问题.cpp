#include <bits/stdc++.h> 
using namespace std;
int main(){
	int a, x;
	int j = 0;
	cin >> a >> x;
	for (int i = 1; i <= a; i++) {
		int b, c;
		b = i;
		do {
			c = b % 10;
			b = b / 10;
			if (c == x) {
			    j++;	
			}
		}
		while (b != 0);
	}
	cout << j << endl; 
	return 0;
}
