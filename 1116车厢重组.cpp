/*************************************************************************
	> File Name: 1116车厢重组.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年09月07日 星期六 20时51分38秒
 ************************************************************************/

#include <iostream>
using namespace std;
int a[10005], n;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int cnt = 0;
    for (int i = 1; i <= n - 1; i++) {
        for (int j = 1; j <= n - i; j++) {
            if (a[j] > a[j + 1]) {
                int b = a[j + 1];
                a[j + 1] = a[j];
                a[j] = b;
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}

