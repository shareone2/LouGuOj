/*************************************************************************
	> File Name: 1618三连击（升级版）.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月09日 星期二 16时08分23秒
 ************************************************************************/

#include <iostream>
#include <ctime>
#include <cstdio>

using namespace std;

int main () {
    int a, b, c, A, B, C, t = 0;
    cin >> a >> b >> c;
    for (int i = 1; i <= 333; i++) {
        A = a * i;
        B = b * i;
        C = c * i;
        if (B > 999 || C > 999) break;
        if (((A / 100) + (A / 10 % 10) + (A % 10) + (B / 100) + (B / 10 % 10) + (B % 10) + (C / 100) + (C / 10 % 10) + (C % 10) == 45) && (A / 100) * (A / 10 % 10) * (A % 10) * (B / 100) * (B / 10 % 10) * (B % 10) * (C / 100) * (C / 10 % 10) * (C % 10) == 362880) {
            cout << A << ' ' << B << ' ' << C << endl;
            t = 1;
        }
    }
    if (t == 0) cout << "No!!!" << endl;
    // printf("Time used = %.2f(ms)\n", (double)clock() / CLOCKS_PER_SEC * 1000);
    return 0;
}
