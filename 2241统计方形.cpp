/*************************************************************************
	> File Name: 2241统计方形.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年09月02日 星期一 15时17分32秒
 ************************************************************************/

#include <iostream>
using namespace std;
long long n, m, ans1, ans2;
int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j) { ans1 = ans1 + (n - i) * (m - j); }
            else { ans2 = ans2 + (n - i) * (m - j); }
        }
    }
    cout << ans1 << ' ' << ans2 << endl;
    return 0;
}
