/*************************************************************************
	> File Name: 1147连续自然数求和.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月29日 星期一 20时16分46秒
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
int main () {
    int m;
    cin >> m;
    for (int a1 = sqrt(2 * m); a1 > 1; a1--) {
        if (2 * m % a1 == 0 && (2 * m / a1 + a1) % 2) {
            int a2 = 2 * m / a1;
            cout << (a2 - a1 + 1) / 2 << ' ' << (a1 + a2 - 1) / 2 << endl;
        }
    }
    return 0;
}
