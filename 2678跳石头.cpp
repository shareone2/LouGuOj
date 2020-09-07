/*************************************************************************
	> File Name: 2678跳石头.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月05日 星期日 22时06分21秒
 ************************************************************************/

#include <iostream>
using namespace std;
int main () {
    int l, m, n, stone[50005];
    cin >> l >> m >> n;
    if (!m && !n) {
        cout << l << endl;
        return 0;
    }
    stone[0] = 0;
    for (int i = 1; i <= m; i++) cin >> stone[i];
    stone[m + 1] = l;
    int left = 0, right = l, ans;
    while (left < right) {
        int mid = (left + right) / 2, cnt = 0, now = 0;
        for (int i = 1; i <= m + 1; i++) {
            if (cnt > n) break;
            if (stone[i] - stone[now] < mid) cnt++;
            else now = i;
        }
        if (cnt > n) right = mid;
        else if (cnt <= n) {
            ans = mid;
            left = mid + 1;
        }
    }
    cout << ans << endl;
    return 0;
}
