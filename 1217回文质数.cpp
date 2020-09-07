/*************************************************************************
	> File Name: 1217回文质数.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月08日 星期一 21时30分53秒
 ************************************************************************/

#include <iostream>
#include <ctime>
#include <cstdio>

using namespace std;

int judge(int pal);

int n, m;

int main () {
    int a, b, c, d, e, pal;

    cin >> n >> m;

    for (a = 2; a <= 9; a++) {
        pal = a;
        if (judge(pal)) cout << pal << endl;
    }
    
    if (n <= 11 && m >= 11) cout << "11" << endl;
    
    for (a = 1; a <= 9; a += 2) {
        for (b = 0; b <= 9; b++) {
            pal = a * 100 + b * 10 + a;
            if (judge(pal)) cout << pal << endl;
        }
    }
    
    for (a = 1; a <= 9; a += 2) {
        for (b = 0; b <= 9; b++) {
            for (c = 0; c <= 9; c++) {
                pal = a * 10000 + b * 1000 + c * 100 + b * 10 + a;
                if (judge(pal)) cout << pal << endl;
            }
        }
    }

    for (a = 1; a <= 9; a += 2) {
        for (b = 0; b <= 9; b++) {
            for (c = 0; c <= 9; c++) {
                for (d = 0; d <= 9; d++) {
                    pal = a * 1000000 + b * 100000 + c * 10000 + d * 1000 + c * 100 + b * 10 + a;
                    if (judge(pal)) cout << pal << endl;
                }
            }
        }
    }
    
    for (a = 1; a <= 9; a += 2) {
        for (b = 0; b <= 9; b++) {
            for (c = 0; c <= 9; c++) {
                for (d = 0; d <= 9; d++) {
                    for (e = 0; e <= 9; e++) {
                        pal = a * 100000000 + b * 10000000 + c * 1000000 + d * 100000 + e * 10000 + d * 1000 + c * 100 + b * 10 + a;
                        if (judge(pal)) cout << pal << endl;
                    }
                }
            }
        }
    }

    // printf("Time used = %.2f(ms)\n", (double)clock() / CLOCKS_PER_SEC * 1000);

    return 0;
}

int judge (int pal) {
    if (pal < n || pal > m) return 0;
    for (int i = 2; i * i <= pal; i++) {
        if (pal % i == 0) return 0;
    }
    return 1;
}
