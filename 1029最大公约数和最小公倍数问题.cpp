/*************************************************************************
	> File Name: 1029最大公约数和最小公倍数问题.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月16日 星期二 22时28分59秒
 ************************************************************************/

#include <iostream>

using namespace std;

int gcd (int a, int b);

int main () {
    int x0, y0, ans = 0;
    cin >> x0 >> y0;
    for (int i = 1; i * i <= x0 * y0; i++) {
        if ((x0 * y0 % i == 0) && (gcd(i, x0 * y0 / i) == x0)) ans++;
    }
    cout << 2 * ans << endl;
    return 0;
}

int gcd (int a, int b) {
    return b == 0 ? a : gcd (b, a % b);
}
