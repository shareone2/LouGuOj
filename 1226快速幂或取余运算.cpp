/*************************************************************************
	> File Name: 1226快速幂或取余运算.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年03月17日 星期日 14时59分17秒
 ************************************************************************/

#include<iostream>
using namespace std;
int main(){
    long long b, p, k;
    cin >> b >> p >> k;
    long long ans = 1, base = b, t = p;
    for (; p > 0; p >>= 1) {
        if (p & 1) {
            ans = ans * base;
            ans = ans % k;
        }
        base = base * base;
        base = base % k;
    }
    cout << b << '^' << t << " mod " << k << '=' << ans % k << endl;
    return 0;
}
