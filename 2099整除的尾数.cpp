/*************************************************************************
	> File Name: c.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月25日 星期六 10时03分42秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int a, b;
    while (cin >> a >> b) {
        if (!a && !b) break;
        int t = 0;
        for (int i = 0; i <= 9; i++) {
            for (int j = 0; j <= 9; j++) {
                if ((a * 100 + i * 10 + j) % b == 0 && !t) {
                    printf("%02d", i * 10 + j);
                    t = 1;
                } else if ((a * 100 + i * 10 + j) % b == 0) {
                    printf(" %02d", i * 10 + j);
                }
            }
        }
        cout << endl;
    }
    return 0;
}
