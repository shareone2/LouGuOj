#include <bits/stdc++.h> //������C++ͷ�ļ���Ԥ����ָ� 
using namespace std;
int main(){
	int a;
	long long b; 
	cin >> a >> b;
	long long sum = 0;
	for (int i = 1; i <= b; i++) {
		if (a != 6 && a != 7) {
			sum = sum +250;
		}
		if (a >= 1 && a <= 7) {
		a++; 
    	}
    	if (a == 8) {
    		a = 1;
		}
	}
	cout << sum << endl;
	return 0;
} 
