/*************************************************************************
	> File Name: 5534等差数列.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年09月07日 星期六 17时52分45秒
 ************************************************************************/

#include <iostream>
using namespace std;
long long  a1, a2, d, n, ans = 0;
int main() {
    cin >> a1 >> a2 >> n;
    ans = ans + a1 + a2;
    d = a2 - a1;
    for (int i = 3; i <= n; i++) {
        a2 = a2 + d;
        ans += a2;
    }
    cout << ans << endl;
    return 0;
}
