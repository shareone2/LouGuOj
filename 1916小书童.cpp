/*************************************************************************
	> File Name: 1916小书童.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年09月08日 星期日 13时12分45秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;
int n, m, k, w, r, num[10005];
int main() {
    cin >> n >> m >> k >> w >> r;
    for (int i = 1; i <= n; i++) { cin >> num[i]; }
    sort(num + 1, num + n + 1);
    int count = m / k, cnt = 1;
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= count; j++) {
            if (num[cnt] > 0) { num[cnt] = num[cnt] - w; }
            if (cnt < n && num[cnt] < 0) { cnt++; }
            if (cnt > n) { break; }
        }
        if (cnt > n) { break; }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (num[i] > 0) { ans++; }
    }
    cout << ans << endl;
    return 0;
}
