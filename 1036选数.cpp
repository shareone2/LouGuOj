/*************************************************************************
	> File Name: 111111111111111.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月06日 星期六 20时12分16秒
 ************************************************************************/

#include <iostream>
#include <cstdio>

using namespace std;

int n, k, a[21], t;

int ss(int x) {
	if(x < 2) return 0;
	for(int i = 2; i * i <= x; i++) {
		if(x % i == 0) return 0;
	}
	return 1;
}

void arr(int i, int sum, int j) {
	if(i == n || j == k) {
		if(ss(sum) && j == k) t++;
		return ;
	}
	arr(i + 1, sum, j);
	arr(i + 1, sum + a[i], j + 1);
	return ;
}

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    } 
	t = 0;
	arr(0, 0, 0);
	cout << t << endl;
	return 0;
}
	

