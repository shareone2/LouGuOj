/*************************************************************************
	> File Name: 1152欢乐的跳.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年10月21日 星期一 17时47分42秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int n, num[1005], cha[1005];
int main() {
    cin >> n;
    for (int i = 1, cnt = 1; i <= n; i++) {
        cin >> num[i];
        if (i >= 2) { cha[cnt++] = abs(num[i] - num[i - 1]); }
    }
    sort(cha + 1, cha + n);
    for (int i = 1; i <= n - 1; i++) {
        if (cha[i] != i) {
            cout << "Not jolly" << endl;
            return 0;
        }
    }
    cout << "Jolly" << endl;
    return 0;
}
