/*************************************************************************
	> File Name: 1179数字统计.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年10月21日 星期一 18时07分17秒
 ************************************************************************/

#include <iostream>
using namespace std;
int l, r, ans;
int main() {
    cin >> l >> r;
    for (int i = l; i <= r; i++) {
        for (int base = i; base; base /= 10) {
            if (base % 10 == 2) { ans++; }
        }
    }
    cout << ans << endl;
    return 0;
}
