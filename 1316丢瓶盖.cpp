/*************************************************************************
	> File Name: 1316丢瓶盖.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年05月06日 星期一 18时38分58秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;
int main () {
    int a, b, num[100005], ans;
    cin >> a >> b;
    for (int i = 0; i < a; i++) cin >> num[i];
    sort(num, num + a);
    int left = 0, right = num[a - 1] - num[0];
    while (left < right) {
        int mid = (left + right) / 2, now = 0, cnt = 0;
        for (int i = 1; i < a; i++) {
            if (cnt > a - b) break;
            if (num[i] - num[now] < mid) cnt++;
            else now = i;
        }
        if (cnt <= a - b) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    cout << ans << endl;
    return 0;
}
