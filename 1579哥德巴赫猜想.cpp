/*************************************************************************
	> File Name: 1579哥德巴赫猜想.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月09日 星期二 19时40分01秒
 ************************************************************************/

#include <iostream>
#include <ctime>
#include <cstdio>

using namespace std;

int ss(int k);

int main () {
    int n, k, t = 1;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        for (int j = 2; j < n - i; j++){
            k = n - i - j;
            if (ss(i) && ss(j) && ss(k)) {
                cout << i << ' ' << j << ' ' << k << endl;
                t = 0;
                break;
            }
        }
        if (t == 0) break;
    } 
   
    // printf("Time used = %.2f(ms)\n", (double)clock() / CLOCKS_PER_SEC * 1000);
    return 0;
}
int ss(int k) {
    for (int i = 2; i * i <= k; i++) {
        if (k % i == 0) return 0;
    }
    return 1;
}
