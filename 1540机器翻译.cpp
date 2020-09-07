/*************************************************************************
	> File Name: 1540机器翻译.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年09月18日 星期三 13时26分38秒
 ************************************************************************/

#include <iostream>
using namespace std;
int m, n, x, l = 1, r = 1, ans, flog[1005], num[1005];
int main() {
    cin >> m >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (!flog[x]) {
            num[r++] = x;
            flog[x] = 1;
            ans++;
            if (r > m + 1) { flog[num[l++]] = 0; }
        }
    }
    cout << ans << endl;
    return 0;
} 
