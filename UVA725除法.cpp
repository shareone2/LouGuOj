/*************************************************************************
	> File Name: UVA725除法.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年09月16日 星期一 18时08分08秒
 ************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;
int n, flog;
int judge(int a, int b);
int main() {
    while (cin >> n && n != 0) {
        for (int i = 1234; i * n <= 98765; i++) {
            if (judge(i, i * n)) {
                flog = 1;
                if (i / 10000) { cout << i * n << " / " << i << " = " << n << endl; }
                else { cout << i * n << " / 0" << i << " = " << n << endl; }
            }
        }
        if (!flog) { cout << "There are no solutions for " << n << endl;}
        flog = 0;
    }
    return 0;
}
int judge(int a, int b) {
    int x[10];
    memset(x, 0, sizeof(x));
    if (!(a / 10000) || !(b / 10000)) { x[0] = 1; }
    while (a) {
        if (x[a % 10]) { return 0; }
        x[a % 10] = 1;
        a = a / 10;
    }
    while (b) {
        if (x[b % 10]) { return 0; }
        x[b % 10] = 1;
        b = b / 10;
    }
    for (int i = 0; i <= 9; i++) {
        if (!x[i]) { return 0; }
    }
    return 1;
}
