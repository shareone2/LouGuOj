/*************************************************************************
	> File Name: 1032均分纸牌.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月19日 星期五 20时15分00秒
 ************************************************************************/

#include <iostream>

using namespace std;

int main () {
    int n, every[105], sum = 0, ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> every[i];
        sum += every[i];
    }
    sum /= n;
    for (int i = 1; i <= n; i++) {
        if (every[i] == sum) continue;
        every[i + 1] += every[i] - sum;
        ans++;
    }
    cout << ans << endl;
    return 0;
}
